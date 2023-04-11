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
            if (Tank.GetComponent<TankUI>() == null)
            {
                Tank.GetComponent<MilitaryTankUI>().LevelFinished();
            }
            else
            {
                Tank.GetComponent<TankUI>().LevelFinished();
            }

        }
    }
}
