using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMover : MonoBehaviour
{
    public GameObject CameraTarget;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Vector3 CameraMod = new Vector3(0f, 0f, -10f);

        Vector3 CameraLookSpot = CameraTarget.transform.position + CameraMod;
        this.transform.position = CameraLookSpot;
    }
}
