using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TankUI : MonoBehaviour
{

    [SerializeField]
    private GameObject Tank;
    [SerializeField]
    private Slider PowerBar;
    [SerializeField]
    private Text PowerText;
    [SerializeField]
    private GameObject GolfBall;
    [SerializeField]
    private GameObject Explosion;

    private GameObject CurrentBall;
    [SerializeField]
    private Transform ShootPoint;
    [SerializeField]
    private GameObject TurretPivot;

    private Vector3 direction;

    [SerializeField]
    private float YLevel;

    [SerializeField]
    private float XLevel;

    [SerializeField]
    private GameObject CameraTarget;

    private float CurrentTurretRotation = -40;

    [SerializeField]
    private GameObject FiringUI;
    [SerializeField]
    private GameObject BallUI;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void SliderUpdated()
    {
        PowerText.text = "Power: " + PowerBar.value;
    }

    public void ResetStage()
    {
        SceneManager.LoadScene(0);
    }

    public void TurretLeft()
    {
        if (CurrentTurretRotation < 90)
        {
            CurrentTurretRotation = CurrentTurretRotation + 15f;
            TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
        }

    }

    public void TurretRight()
    {
        if (CurrentTurretRotation > -90)
        {
            CurrentTurretRotation = CurrentTurretRotation - 15f;
            TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
        }
       
    }

    public void FireBall()
    {
        CurrentBall = GameObject.Instantiate(GolfBall, ShootPoint.position, TurretPivot.transform.rotation);
        Debug.Log("TurretPivot: "+TurretPivot.transform.rotation);
        XLevel = PowerBar.value;

        direction = transform.right * XLevel;

        Debug.Log(direction);

        CurrentBall.GetComponent<Rigidbody>().AddForce(CurrentBall.transform.up * XLevel, ForceMode.Impulse);

        CameraTarget.GetComponent<BallChaser>().Follow(CurrentBall);

        FiringUI.SetActive(false);
        BallUI.SetActive(true);
    }

    public void Explode()
    {
        Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
        Destroy(CurrentBall);

        FiringUI.SetActive(true);
        BallUI.SetActive(false);
    }

    public void Teleport()
    {
        Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
        Tank.transform.position = CurrentBall.transform.position + new Vector3(0, 3, 0);
        

        Destroy(CurrentBall);
        FiringUI.SetActive(true);
        BallUI.SetActive(false);


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
