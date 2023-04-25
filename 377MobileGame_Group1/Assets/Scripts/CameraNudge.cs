using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraNudge : MonoBehaviour
{

    private Vector3 CameraPoint;
    [SerializeField]
    private GameObject CameraTarget;

    private Vector3 NewCameraPoint;
    [SerializeField]
    private Camera SceneCamera;

    private GameObject Tank;

    private bool Movable;

    // Start is called before the first frame update
    void Start()
    {
        CameraTarget = GameObject.Find("Camera Target");
        Tank = GameObject.Find("Tank");
    }

    // Update is called once per frame
    void Update()
    {
        if (CameraTarget.GetComponent<BallChaser>().LevelPreview == true) return;
        PanCamera();


    }

    private void PanCamera()
    {
        //checks for mouse click
        //moves camera towards the direction you drag

        if (Input.GetMouseButtonDown(0) && Input.mousePosition.y > 300)   
        {
            //Debug.Log(Input.mousePosition.y);
            CameraPoint = SceneCamera.ScreenToWorldPoint(Input.mousePosition);
            SceneCamera.GetComponent<CameraMover>().Nudging = true;
            if (!CameraTarget.GetComponent<BallChaser>().FollowingBall) 
            {
                if (Tank.GetComponent<TankUI>() == null)
                {
                    Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
                }
                else
                {
                    Tank.GetComponent<TankUI>().ToggleFiringUI();
                }
            }
           
            Movable = true;
        }

        if (Input.GetMouseButton(0) && Movable)  
        {
            Vector3 difference = CameraPoint - SceneCamera.ScreenToWorldPoint(Input.mousePosition);

            //print("origin" + CameraPoint + "new position" + SceneCamera.ScreenToWorldPoint(Input.mousePosition));

            SceneCamera.transform.position += difference;
        }

        if (!Input.GetMouseButton(0))
        {
            SceneCamera.GetComponent<CameraMover>().Nudging = false;
            if (!CameraTarget.GetComponent<BallChaser>().FollowingBall)
            {
                if (Movable == true)
                {
                    if (Tank.GetComponent<TankUI>() == null)
                    {
                        Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
                    }
                    else
                    {
                        Tank.GetComponent<TankUI>().ToggleFiringUI();
                    }
                }
            }
            Movable = false;
        }

    }



}
