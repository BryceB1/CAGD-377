using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sand : MonoBehaviour
{
    private GameObject Tank;
    private GameObject Ball;
    

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            Ball = other.gameObject;
            Ball.GetComponent<Rigidbody>().drag = 5f;
        }
    }
}
