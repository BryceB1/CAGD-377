using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BallChaser : MonoBehaviour
{
    //[SerializeField]
    private GameObject CurrentBall;

    public GameObject Tank;

    public bool LevelPreview;

    public bool FollowingBall;

    [SerializeField] private GameObject HolePoint, TankPoint, Buffer1, Buffer2;

    private string LevelName;

    private int PreviewSteps = 0;

    private Vector3 p01;

    private float timeStart;
    [SerializeField] private float timeDuration = 3.0f;

    //public string Levelname;
    [SerializeField]
    private Text LevelTitle;
    private GameObject LevelTitleObject;
    private Color c01;
    private Color c12;
    private Color c012;

    private void OnEnable()
    {
        SceneManager.activeSceneChanged += OnSceneLoaded;
    }

    void OnSceneLoaded(Scene scene,Scene scene2)
    {
       PreviewStage();
        
    }

    private void OnDisable()
    {
        SceneManager.activeSceneChanged -= OnSceneLoaded;
    }

    public void ActivateLevel()
    {
        PreviewStage();
        
    }

    private void PreviewStage()
    {
        //Debug.Log("Stage Previewing");

        if (Tank.GetComponent<TankUI>()== null)
        {
            Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
        }
        else
        {
            Tank.GetComponent<TankUI>().ToggleFiringUI();
        }
        if (Buffer1!=null) PreviewSteps = 3;
        if (Buffer2!=null) PreviewSteps = 4;
        LevelPreview = true;
        timeStart = Time.time;
        if (Tank.GetComponent<TankUI>()== null)
        {
            LevelName = Tank.GetComponent<MilitaryTankUI>().LevelName;
        }
        else
        {
            LevelName = Tank.GetComponent<TankUI>().LevelName;
        }
        LevelTitle.text = LevelName;
        LevelTitleObject = LevelTitle.gameObject;
        LevelTitleObject.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        if (LevelPreview == true)
        {
            float u = (Time.time - timeStart) / timeDuration;
            if (u >= 1)
            {
                u = 1;
                LevelPreview = false;
                if (Tank.GetComponent<TankUI>() == null)
                {
                    Tank.GetComponent<MilitaryTankUI>().ToggleFiringUI();
                }
                else
                {
                    Tank.GetComponent<TankUI>().ToggleFiringUI();
                }
                LevelTitleObject.SetActive(false);
            }
            
            c01 = (1 - u) * new Color(0, 0, 0, 0) + u * new Color(0, 0, 0, 2);
            c12 = (1 - u) * new Color(0, 0, 0, 2) + u * new Color(0, 0, 0, 0);
            c012 = (1 - u) * c01 + u * c12;
            LevelTitle.GetComponent<Text>().color = c012;

            //standard linear interpolation formula
            p01 = (1 - u) * HolePoint.transform.position + u * TankPoint.transform.position;

            if (PreviewSteps < 3)
            {
                transform.position = p01;
            }


            Vector3 p12, p23, p012, p123, p0123;
            if (PreviewSteps == 3)
            {
                p01 = (1 - u) * HolePoint.transform.position + u * Buffer1.transform.position;
                p12 = (1 - u) * Buffer1.transform.position + u * Tank.transform.position;
                p012 = (1 - u) * p01 + u * p12;
                transform.position = p012;
            }



            if (PreviewSteps == 4)
            {
                p01 = (1 - u) * HolePoint.transform.position + u * Buffer1.transform.position;
                p12 = (1 - u) * Buffer1.transform.position + u * Buffer2.transform.position;
                p23 = (1 - u) * Buffer2.transform.position + u * TankPoint.transform.position;

                p012 = (1 - u) * p01 + u * p12;
                p123 = (1 - u) * p12 + u * p23;

                p0123 = (1 - u) * p012 + u * p123;

                transform.position = p0123;
            }
            
        }
        else
        {
            if (CurrentBall != null) 
            {
                this.transform.position = CurrentBall.transform.position;
            }
            else
            {
                this.transform.position = Tank.transform.position;
                FollowingBall = false;
            }
        }
        
    }

    public void Follow(GameObject BallShot)
    {
        CurrentBall = BallShot;
        FollowingBall = true;

    }

}
