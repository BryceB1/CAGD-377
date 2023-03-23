using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeadManager : MonoBehaviour
{
    public static HeadManager Instance { get; private set; }

    public int Level1HiScore, Level2HiScore, Level3HiScore;

    public int Level1Star1, Level1Star2, Level1Star3, Level1Star4, Level2Star1, Level2Star2, Level2Star3, Level2Star4, Level3Star1, Level3Star2, Level3Star3, Level3Star4;

    [SerializeField]
    private List<ScriptableObject> LevelDatas;
    [SerializeField]
    private GameObject CameraTarget;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this.gameObject);
            Debug.Log("Clone Destoryed");
        }
        else
        {
            Instance = this;
        }
        DontDestroyOnLoad(this);

       
    }

    private void Update()
    {
        if (CameraTarget == null)
        {
            Start();
        }
        //if (CameraTarget.activeInHierarchy == true && CameraTarget.GetComponent<BallChaser>().LevelPreview == false)
        //{
        //    CameraTarget.SetActive(false);
        //    CameraTarget.SetActive(true);
        //}
       
    }

    private void Start()
    {
        
        CameraTarget = GameObject.Find("Camera Target");
        if (CameraTarget != null)
        {
            CameraTarget.GetComponent<BallChaser>().ActivateLevel();
        }
    }


    public void AddScore(LevelData level)
    {
        AddHighscores(level);
    }

    private void AddHighscores(LevelData level)
    {
        if (level.LevelID == 111)
        {
            Level1HiScore = level.HighScore;
            Level1Star1 = level.StarScore1;
            Level1Star2 = level.StarScore2;
            Level1Star3 = level.StarScore3;
            Level1Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 222)
        {
            Level2HiScore = level.HighScore;
            Level2Star1 = level.StarScore1;
            Level2Star2 = level.StarScore2;
            Level2Star3 = level.StarScore3;
            Level2Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 333)
        {
            Level3HiScore = level.HighScore;
            Level3Star1 = level.StarScore1;
            Level3Star2 = level.StarScore2;
            Level3Star3 = level.StarScore3;
            Level3Star4 = level.SuperStarScore;
        }

        Debug.Log("Reported In");
    }
   
}
