using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallSettings : MonoBehaviour
{
    private GameObject Tank;
    [SerializeField]
    private bool SwitchableBallType;
    [SerializeField]
    private bool NormalBall;
    [SerializeField]
    private bool PlatformBall;
    [SerializeField]
    private bool WallBall;
    [SerializeField]
    private bool SpikyBall;
    private string CurrentBall = "Normal";
    [SerializeField]
    private GameObject NormalButton;
    [SerializeField]
    private GameObject PlatformButton;
    [SerializeField]
    private GameObject WallButton;
    [SerializeField]
    private GameObject SpikyButton;

    // Start is called before the first frame update
    void Start()
    {
        Tank = GameObject.Find("Tank");

        if (NormalBall)
        {
            CurrentBall = "Normal";
            Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
            NormalButton.SetActive(true);
            if (!SwitchableBallType)
            {
                NormalButton.SetActive(false);
            }
        }
        else if (PlatformBall)
        {
            Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
            CurrentBall = "Platform";
            PlatformButton.SetActive(true);
            NormalButton.SetActive(false);
            if (!SwitchableBallType)
            {
                NormalButton.SetActive(false);
                PlatformButton.SetActive(false);
            }
        }
        else if (WallBall)
        {
            Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
            CurrentBall = "Wall";
            WallButton.SetActive(true);
            NormalButton.SetActive(false);
            if (!SwitchableBallType)
            {
                NormalButton.SetActive(false);
                WallButton.SetActive(false);
            }
        }
        else if (SpikyBall)
        {
            Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
            CurrentBall = "Spiky";
            SpikyButton.SetActive(true);
            NormalButton.SetActive(false);
            if (!SwitchableBallType)
            {
                NormalButton.SetActive(false);
                SpikyButton.SetActive(false);
            }
        }
    }

    public void CycleBall()
    {
        if (NormalBall && CurrentBall == "Normal")
        {
            if (PlatformBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
                CurrentBall = "Platform";
                NormalButton.SetActive(false);
                PlatformButton.SetActive(true);
            }
            else if (WallBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
                CurrentBall = "Wall";
                NormalButton.SetActive(false);
                WallButton.SetActive(true);
            }
            else if (SpikyBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
                CurrentBall = "Spiky";
                NormalButton.SetActive(false);
                SpikyButton.SetActive(true);
            }
        }
        else if (PlatformBall && CurrentBall == "Platform")
        {
            if (WallBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
                CurrentBall = "Wall";
                PlatformButton.SetActive(false);
                WallButton.SetActive(true);
            }
            else if (SpikyBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
                CurrentBall = "Spiky";
                PlatformButton.SetActive(false);
                SpikyButton.SetActive(true);
            }
            else if (NormalBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
                CurrentBall = "Normal";
                PlatformButton.SetActive(false);
                NormalButton.SetActive(true);
            }
        }
        else if (WallBall && CurrentBall == "Wall")
        {
            if (SpikyBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(4);
                CurrentBall = "Spiky";
                WallButton.SetActive(false);
                SpikyButton.SetActive(true);
            }
            else if (NormalBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
                CurrentBall = "Normal";
                WallButton.SetActive(false);
                NormalButton.SetActive(true);
            }
            else if (PlatformBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
                CurrentBall = "Platform";
                WallButton.SetActive(false);
                PlatformButton.SetActive(true);
            }
        }
        else if (SpikyBall && CurrentBall == "Spiky")
        {
            if (NormalBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(1);
                CurrentBall = "Normal";
                SpikyButton.SetActive(false);
                NormalButton.SetActive(true);
            }
            else if (PlatformBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(2);
                CurrentBall = "Platform";
                SpikyButton.SetActive(false);
                PlatformButton.SetActive(true);
            }
            else if (WallBall)
            {
                Tank.GetComponent<MilitaryTankUI>().BallTypeSet(3);
                CurrentBall = "Wall";
                SpikyButton.SetActive(false);
                WallButton.SetActive(true);
            }
        }
        //Debug.Log(CurrentBall);
    }
}
