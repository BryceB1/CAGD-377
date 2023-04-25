using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Elevator : MonoBehaviour
{
    [SerializeField]
    private int Floor;
    [SerializeField]
    private bool UP;
    [SerializeField]
    private GameObject ElevatorObject;
    [SerializeField]
    private bool MovingUp,MovingDown;
    private int Floor1Height = 3;
    private int Floor2Height = 33;
    private int FloorM1Height;
    [SerializeField]
    private GameObject Door;
    [SerializeField]
    private GameObject Tank;
    [SerializeField]
    private bool TankOn;
    [SerializeField]
    private bool Interactable;
    [SerializeField]
    private GameObject Light;

    private float timeStart;
    private float timeDuration = 5.0f;

    private Vector3 p0, p1, p01;

    private Vector3 t0, t1, t01;

    private void FixedUpdate()
    {
        if (MovingUp == true || MovingDown == true)
        {
            if (MovingUp && Floor == 1)
            {
                float u = (Time.time - timeStart) / timeDuration;
                if (u >= 1)
                {
                    u = 1;
                    Tank.GetComponent<TankUI>().ToggleFiringUI();
                    Tank.GetComponent<TankUI>().ToggleFiringUI();
                    MovingUp = false;
                    Floor = 2;
                    Door.transform.position += new Vector3(0f, 0f, 1f);
                    Light.GetComponent<Renderer>().material.color = Color.green;
                }


                p01 = (1 - u) * p0 + u * p1;
                t01 = (1 - u) * t0 + u * t1;

                ElevatorObject.transform.position = p01;
                if (TankOn)
                {
                    Tank.transform.position = t01;
                }
                
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Ball" && Interactable) 
        {
            ElevatorMove(UP, Floor);
            Tank.GetComponent<TankUI>().NoEffect();
        }
    }

    private void ElevatorMove(bool Direction,int CurrentFloor)
    {
        if (CurrentFloor == 1 && Direction == true) 
        {
            MoveElevatorUp();
            //Tank.GetComponent<TankUI>().ToggleFiringUI();
        }
    }

    private void MoveElevatorUp()
    {
        MovingUp = true;
        p0 = new Vector3(ElevatorObject.transform.position.x, Floor1Height, ElevatorObject.transform.position.z);
        p1 = new Vector3(ElevatorObject.transform.position.x, Floor2Height, ElevatorObject.transform.position.z);
        t0 = Tank.transform.position;
        t1 = Tank.transform.position + new Vector3(0f, 30f, 0f);
        timeStart = Time.time;
        Door.transform.position += new Vector3(0f, 0f, -1f);
        Light.GetComponent<Renderer>().material.color = Color.red;
    }

    public void TankEntered()
    {
        TankOn = !TankOn;
    }
}
