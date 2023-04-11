using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainElevator : MonoBehaviour
{
    [SerializeField]
    private GameObject Button1, Button2, Tank;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == Tank) 
        {
            Button1.GetComponent<Elevator>().TankEntered();
            Button2.GetComponent<Elevator>().TankEntered();
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject == Tank)
        {
            Button1.GetComponent<Elevator>().TankEntered();
            Button2.GetComponent<Elevator>().TankEntered();
        }
    }
}
