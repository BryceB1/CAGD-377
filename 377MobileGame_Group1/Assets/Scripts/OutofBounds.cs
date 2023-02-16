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
            Tank.GetComponent<TankUI>().NoEffect();
        }
        if (other.gameObject == Tank)
        {
            Tank.transform.position = RespawnPoint.transform.position;
            Tank.GetComponent<TankUI>().StopMovement();
        }
    }
}
