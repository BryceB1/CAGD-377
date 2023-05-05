using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeadManager : MonoBehaviour
{
    public static HeadManager Instance { get; private set; }

    public int Level1HiScore, Level2HiScore, Level3HiScore, Level4HiScore;
    public int BLevel1HiScore, BLevel2HiScore, BLevel3HiScore, BLevel4HiScore, BLevel5HiScore, BLevel6HiScore;

    public int Level1Star1, Level1Star2, Level1Star3, Level1Star4, Level2Star1, Level2Star2, Level2Star3, Level2Star4, Level3Star1, Level3Star2, Level3Star3, Level3Star4;
    public int Level4Star1, Level4Star2, Level4Star3, Level4Star4;
    public int BLevel1Star1, BLevel1Star2, BLevel1Star3, BLevel1Star4, BLevel2Star1, BLevel2Star2, BLevel2Star3, BLevel2Star4, BLevel3Star1, BLevel3Star2, BLevel3Star3, BLevel3Star4;
    public int BLevel4Star1, BLevel4Star2, BLevel4Star3, BLevel4Star4, BLevel5Star1, BLevel5Star2, BLevel5Star3, BLevel5Star4, BLevel6Star1, BLevel6Star2, BLevel6Star3, BLevel6Star4;
    [SerializeField]
    private List<ScriptableObject> LevelDatas;

    //private GameObject CameraTarget;

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

        //CameraTarget = GameObject.Find("Camera Target");
        //if (CameraTarget != null)
        //{
        //    CameraTarget.GetComponent<BallChaser>().ActivateLevel();
        //}
    }


    public void AddScore(LevelData level)
    {
        AddHighscores(level);
    }

    private void AddHighscores(LevelData level)
    {
        if (level.LevelID == 0)
        {
            Level1HiScore = level.HighScore;
            Level1Star1 = level.StarScore1;
            Level1Star2 = level.StarScore2;
            Level1Star3 = level.StarScore3;
            Level1Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 1)
        {
            Level2HiScore = level.HighScore;
            Level2Star1 = level.StarScore1;
            Level2Star2 = level.StarScore2;
            Level2Star3 = level.StarScore3;
            Level2Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 2)
        {
            Level3HiScore = level.HighScore;
            Level3Star1 = level.StarScore1;
            Level3Star2 = level.StarScore2;
            Level3Star3 = level.StarScore3;
            Level3Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 3)
        {
            Level4HiScore = level.HighScore;
            Level4Star1 = level.StarScore1;
            Level4Star2 = level.StarScore2;
            Level4Star3 = level.StarScore3;
            Level4Star4 = level.SuperStarScore;
        }

        if (level.LevelID == 111)
        {
            BLevel1HiScore = level.HighScore;
            BLevel1Star1 = level.StarScore1;
            BLevel1Star2 = level.StarScore2;
            BLevel1Star3 = level.StarScore3;
            BLevel1Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 222)
        {
            BLevel2HiScore = level.HighScore;
            BLevel2Star1 = level.StarScore1;
            BLevel2Star2 = level.StarScore2;
            BLevel2Star3 = level.StarScore3;
            BLevel2Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 333)
        {
            BLevel3HiScore = level.HighScore;
            BLevel3Star1 = level.StarScore1;
            BLevel3Star2 = level.StarScore2;
            BLevel3Star3 = level.StarScore3;
            BLevel3Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 444)
        {
            BLevel4HiScore = level.HighScore;
            BLevel4Star1 = level.StarScore1;
            BLevel4Star2 = level.StarScore2;
            BLevel4Star3 = level.StarScore3;
            BLevel4Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 555)
        {
            BLevel5HiScore = level.HighScore;
            BLevel5Star1 = level.StarScore1;
            BLevel5Star2 = level.StarScore2;
            BLevel5Star3 = level.StarScore3;
            BLevel5Star4 = level.SuperStarScore;
        }
        if (level.LevelID == 666)
        {
            BLevel6HiScore = level.HighScore;
            BLevel6Star1 = level.StarScore1;
            BLevel6Star2 = level.StarScore2;
            BLevel6Star3 = level.StarScore3;
            BLevel6Star4 = level.SuperStarScore;
        }

        Debug.Log("Reported In");
    }
   
}
