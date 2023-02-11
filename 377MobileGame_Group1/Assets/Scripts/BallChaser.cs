using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallChaser : MonoBehaviour
{
    [SerializeField]
    private GameObject CurrentBall;

    public GameObject Tank;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (CurrentBall != null)
        {
            this.transform.position = CurrentBall.transform.position;
        }
        else
        {
            this.transform.position = Tank.transform.position;
        }
    }

    public void Follow(GameObject BallShot)
    {
        CurrentBall = BallShot;


    }

}
