using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OutofBounds : MonoBehaviour
{
    private GameObject Tank;
    private GameObject RespawnPoint;
    // Start is called before the first frame update
    void Start()
    {
        Tank = GameObject.Find("Tank");
        RespawnPoint = GameObject.Find("RespawnPoint");
    }

    


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            if (Tank.GetComponent<TankUI>() != null)
            {
                Tank.GetComponent<TankUI>().NoEffect();
            }
            else
            {
                Tank.GetComponent<MilitaryTankUI>().NoEffect();
            }

        }
        if (other.gameObject == Tank)
        {
            Tank.transform.position = RespawnPoint.transform.position;
            if (Tank.GetComponent<TankUI>() != null)
            {
                Tank.GetComponent<TankUI>().StopMovement();
            }
            else
            {
                Tank.GetComponent<MilitaryTankUI>().NoEffect();
            }
        }
    }
}
