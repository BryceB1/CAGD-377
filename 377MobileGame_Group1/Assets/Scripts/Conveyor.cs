using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Conveyor : MonoBehaviour
{
    private GameObject Ball;
    [SerializeField]
    public bool directional;

    private void Update()
    {
        if (directional && Ball != null)
        {
            Ball.transform.position += new Vector3(0.01f, 0, 0);
        }
        else if (!directional && Ball != null)
        {
            Ball.transform.position += new Vector3(-0.01f, 0, 0);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            Ball = other.gameObject;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            Ball = null;
        }
    }
}
