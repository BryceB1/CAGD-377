using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FanPush : MonoBehaviour
{
    private GameObject Ball;

    [SerializeField]
    private float force = 25;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            Ball = other.gameObject;
            Ball.GetComponent<Rigidbody>().AddForce(transform.up * force, ForceMode.Impulse);
        }
    }

}
