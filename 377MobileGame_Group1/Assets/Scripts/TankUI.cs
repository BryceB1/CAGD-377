using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TankUI : MonoBehaviour
{
    [SerializeField] private int SceneNum;

    //[SerializeField]
    private GameObject Tank;
    [SerializeField]
    private Slider PowerBar;
    [SerializeField]
    private Text PowerText;
    [SerializeField]
    private GameObject GolfBall;
    [SerializeField]
    private GameObject PlatBall;
    [SerializeField]
    private GameObject Platform;
    [SerializeField]
    private GameObject WallBall;
    [SerializeField]
    private GameObject Wall;
    [SerializeField]
    private GameObject SpikeBall;
    [SerializeField]
    private GameObject Explosion;
    [SerializeField]
    private GameObject TeleportEffect;
    //[SerializeField]
    private GameObject CurrentBall;
    [SerializeField]
    private Transform ShootPoint;
    //[SerializeField]
    private GameObject TurretPivot;

    private Vector3 direction;

    //[SerializeField]
    private float YLevel;

    //[SerializeField]
    private float XLevel;

    //[SerializeField]
    private GameObject CameraTarget;
    [SerializeField]
    private float CurrentTurretRotation = -40;

    //[SerializeField]
    private GameObject FiringUI;
    //[SerializeField]
    private GameObject BallUI;
    private GameObject GameOverUI;
    //[SerializeField]
    private GameObject TeleportButton;
    //[SerializeField]
    private GameObject ExplodeButton;
    //[SerializeField]
    private GameObject PlatformButton;
    //[SerializeField]
    private GameObject WallButton;
    //[SerializeField]
    private GameObject ExplodeWarning;
    //[SerializeField]
    private GameObject TeleportWarning;
    [SerializeField]
    private Text BallCounter;
    private int Balls = 10;
    [SerializeField]
    private Text ShotCounter;
    private int Shots;

    //[SerializeField]
    private GameObject PauseMenu;

    //[SerializeField]
    private bool speedachieved;

    [SerializeField]
    private int movementSpeed;

    [SerializeField]
    private Vector3 movement;

    //[SerializeField]
    private int FuelLevel = 50;
    [SerializeField]
    private float FuelMax = 250;

    [SerializeField]
    private Text FuelTank;

    [SerializeField]
    private Scrollbar FuelGauge;

    //[SerializeField]
    private int BallType = 1;
    //Type 1=Normal
    //Type 2=Platform
    //Type 3=Wall
    //Type 4= Dud/Spiky

    //[SerializeField]
    private GameObject SecretMenu;

    [SerializeField]
    private GameObject levelData;

    public string LevelName;

    private bool ScreenShakeOn = true;
    [SerializeField]
    private Camera MainCamera;

    private void Awake()
    {
        FiringUI = GameObject.Find("Movement UI");
        BallUI = GameObject.Find("BallUI");
        GameOverUI = GameObject.Find("GameOverUI");
        LevelName = levelData.GetComponent<LevelData>().LevelName;
    }

    // Start is called before the first frame update
    void Start()
    {
        movementSpeed = 1;
        FuelLevel = 250;

        Tank = this.gameObject;
        //PowerBar = GameObject.Find("Slider Power");
        TurretPivot = GameObject.Find("Turret Pivot");
        CameraTarget = GameObject.Find("Camera Target");


        TeleportButton = GameObject.Find("Teleport");
        ExplodeButton = GameObject.Find("Explode");
        PlatformButton = GameObject.Find("Platform");
        WallButton = GameObject.Find("WallButton");


        ExplodeWarning = GameObject.Find("Explode Notice");
        TeleportWarning = GameObject.Find("Teleport Notice");
        ExplodeWarning.SetActive(false);
        TeleportWarning.SetActive(false);

        PauseMenu = GameObject.Find("PauseMenu");
        PauseMenu.SetActive(false);

        SecretMenu = GameObject.Find("SecretMenu");
        SecretMenu.SetActive(false);

        BallUI.SetActive(false);
        GameOverUI.SetActive(false);

        MainCamera = GameObject.FindObjectOfType<Camera>();
    }

    private void FixedUpdate()
    {
        
        
        if (movement.x > 0 || movement.x < 0)  
        {
            Tank.transform.position += (movement * Time.deltaTime * movementSpeed);
            FuelLevel--;
            FuelTank.text = "Fuel: " + FuelLevel;
            float FuelPercent = (FuelLevel / FuelMax);
            FuelGauge.size = FuelPercent;
            if (FuelLevel == 0) StopMovement();
        }
        if (CurrentBall != null)
        {


            if (!speedachieved)
            {
                speedachieved = false;
            }
            if (CurrentBall.GetComponent<Rigidbody>().IsSleeping())
            {
                TeleportButton.GetComponent<Button>().interactable = true;
                TeleportWarning.SetActive(false);
            }
            //Debug.Log(CurrentBall.GetComponent<Rigidbody>().velocity);
        }
        
        
    }

    public void SliderUpdated()
    {
        PowerText.text = "Power: " + PowerBar.value;
    }

    public void ResetStage()
    {
        SceneManager.LoadScene(SceneNum);
    }

    public void PauseGame()
    {
        if (PauseMenu.activeInHierarchy == false)
        {
            PauseMenu.SetActive(true);
        }
        else if (PauseMenu.activeInHierarchy == true)
        {
            PauseMenu.SetActive(false);
        }

    }

    public void LevelFinished()
    {
        //SceneManager.LoadScene(SceneNum + 1);
        levelData.GetComponent<LevelData>().shots = Shots;
        levelData.GetComponent<LevelData>().LevelFinished();
        FiringUI.SetActive(false);
        BallUI.SetActive(false);
    }

    public void NextStage()
    {
        SceneManager.LoadScene(SceneNum + 1);
    }

    public void LevelSelect()
    {
        SceneManager.LoadScene(1);
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
        if (CurrentTurretRotation > -85)
        {
            CurrentTurretRotation = CurrentTurretRotation - 15f;
            TurretPivot.transform.rotation = Quaternion.Euler(0f, 0f, CurrentTurretRotation);
        }
       
    }

    public void FireBall()
    {
        MainCamera.GetComponent<CameraMover>().Nudging = false;
        //fires the ball
        if (BallType == 1 || BallType == 0) CurrentBall = GameObject.Instantiate(GolfBall, ShootPoint.position, TurretPivot.transform.rotation);
        if (BallType == 2) CurrentBall = GameObject.Instantiate(PlatBall, ShootPoint.position, TurretPivot.transform.rotation);
        if (BallType == 3) CurrentBall = GameObject.Instantiate(WallBall, ShootPoint.position, TurretPivot.transform.rotation);
        if (BallType == 4) CurrentBall = GameObject.Instantiate(SpikeBall, ShootPoint.position, TurretPivot.transform.rotation);

        XLevel = PowerBar.value;

        direction = transform.right * XLevel;

        CurrentBall.GetComponent<Rigidbody>().AddForce(CurrentBall.transform.up * XLevel, ForceMode.Impulse);
        TeleportButton.GetComponent<Button>().interactable = false;
        TeleportWarning.SetActive(true);
        CameraTarget.GetComponent<BallChaser>().Follow(CurrentBall);

        //Hide the movement UI and show Ball UI
        FiringUI.SetActive(false);
        BallUI.SetActive(true);
        if (BallType == 1 || BallType == 0)
        {
            ExplodeButton.SetActive(true);
            PlatformButton.SetActive(false);
            WallButton.SetActive(false);
        }
        if (BallType == 2)
        {
            ExplodeButton.SetActive(false);
            PlatformButton.SetActive(true);
            WallButton.SetActive(false);
        }
        if (BallType == 3)
        {
            ExplodeButton.SetActive(false);
            PlatformButton.SetActive(false);
            WallButton.SetActive(true);
        }
        if (BallType == 4)
        {
            ExplodeButton.SetActive(true);
            PlatformButton.SetActive(false);
            WallButton.SetActive(false);
        }

        //Make tank stop moving if it is
        movement = new Vector3(0f, 0f, 0f);

        //Reset Fuel
        FuelLevel = (int)FuelMax;
        FuelTank.text = "Fuel: " + FuelLevel;
        float FuelPercent = (FuelLevel / FuelMax);
        FuelGauge.size = FuelPercent;

        //Count the Shot
        Shots++;
        ShotCounter.text = "Strokes: " + Shots;

        //figures out if you should be allowed to explode the ball
        if (Balls < 2)
        {
            if (BallType == 1 || BallType == 0) ExplodeButton.GetComponent<Button>().interactable = false;
            if (BallType == 2) PlatformButton.GetComponent<Button>().interactable = false;
            if (BallType == 3) WallButton.GetComponent<Button>().interactable = false;
            if (BallType == 4) ExplodeButton.GetComponent<Button>().interactable = false;
            ExplodeWarning.SetActive(true);

        }
    }

    public void Explode() //explodes ball and uses current effect
    {
        //detonates the ball
        if (BallType == 1 || BallType == 0) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
        //spawns platform
        if (BallType == 2) Instantiate(Platform, CurrentBall.transform.position, Tank.transform.rotation);
        //spawns wall
        if (BallType == 3) Instantiate(Wall, CurrentBall.transform.position, Quaternion.Euler(0f, 0f, 90f));
        //explodes spike ball
        if (BallType == 4) Instantiate(Explosion, CurrentBall.transform.position, CurrentBall.transform.rotation);
        Destroy(CurrentBall);
        if (BallType == 1 || BallType == 4 && ScreenShakeOn) 
        {
            StartCoroutine(ScreenShake());
        }
        //removes a ball ammo from the counter
        Balls--;
        BallCounter.text = "Balls: " + Balls;
        //allows player to aim again.
        FiringUI.SetActive(true);
        BallUI.SetActive(false);
    }

    IEnumerator ScreenShake()
    {
        float duration = 0.5f;
        Vector3 startPosition = transform.position;
        float elapsedTime = 0f;
        while (elapsedTime < duration)
        {
            elapsedTime += Time.deltaTime;
            CameraTarget.transform.position = startPosition + Random.insideUnitSphere;
            yield return null;
        }
        //transform.position = startPosition;
    }

    public void NoEffect() //Explode Ball without using its effect
    {
        Destroy(CurrentBall);
        //removes a ball ammo from the counter
        Balls--;
        BallCounter.text = "Balls: " + Balls;
        //allows player to aim again.
        FiringUI.SetActive(true);
        BallUI.SetActive(false);
        if (Balls == 0)
        {
            FiringUI.SetActive(false);
            StageLost();
        }
    }

    public void StageLost()
    {
        Debug.Log("Stage lost, idiot!");
        GameOverUI.SetActive(true);
    }

    public void Teleport()
    {
        //does an effect for the teleport
        Instantiate(TeleportEffect, CurrentBall.transform.position, CurrentBall.transform.rotation);
        Tank.transform.position = CurrentBall.transform.position + new Vector3(0, 1, 0);
        Destroy(CurrentBall);
        //allows player to aim again
        FiringUI.SetActive(true);
        BallUI.SetActive(false);


    }

    public void MoveLeft()
    {
        if (FuelLevel > 0)
        {
            movement = new Vector3(-1f, 0f, 0f);
        }

    }

    public void MoveRight()
    {
        if (FuelLevel > 0)
        {
            movement = new Vector3(1f, 0f, 0f);
        }

    }

    public void StopMovement()
    {
        movement = new Vector3(0f, 0f, 0f);
    }

    public void ToggleFiringUI()
    {
        if (FiringUI.activeInHierarchy == false)
        {
            FiringUI.SetActive(true);
        }
        else if (FiringUI.activeInHierarchy == true)
        {
            FiringUI.SetActive(false);
        }
    }


    public void ToggleSecrets()
    {
        if (SecretMenu.activeInHierarchy == false)
        {
            SecretMenu.SetActive(true);
        }
        else if (SecretMenu.activeInHierarchy == true)
        {
            SecretMenu.SetActive(false);
        }
    }

    public void InfiniteBalls()
    {
        Balls = 9999;
        BallCounter.text = "Infinite Balls";
    }

    public void BallTypeSet(int num)
    {
        BallType = num;
    }

    public void GainBall(int ballgain)
    {
        Balls += ballgain;
        BallCounter.text = "Balls: " + Balls;
    }

    public void LoseStrokes(int strokelost)
    {
        Shots -= strokelost;
        ShotCounter.text = "Strokes: " + Shots;
    }
}
