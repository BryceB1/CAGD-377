using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GolfHole : MonoBehaviour
{

    private GameObject Ball;
    private GameObject Tank;


    private void Start()
    {
        Tank = GameObject.Find("Tank");
    }
    private void OnTriggerEnter(Collider other)
    {
        
        if (other.gameObject.tag == "Ball")
        {
            Ball = other.gameObject;
            Tank.GetComponent<TankUI>().LevelFinished();
        }
    }
}
