using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelData : MonoBehaviour
{
    public int par;
    public int shots;
    public int LevelID;
    public string LevelName;
    public int HighScore;
    private int score;
    private int punishment;
    private int reward;

    public int StarScore1,StarScore2,StarScore3,SuperStarScore;

    public GameObject Star1,Star2,Star3,SuperStar;

    [SerializeField]
    private GameObject ScoringUI;
    [SerializeField]
    private Text ScoreText;
    [SerializeField]
    private Text ScoreNameText;

    private int tempscore;
    [SerializeField]
    private string ScoreName;
    

    public void Start()
    {
        if (LevelID == 111)
        {
            if (HighScore < HeadManager.Instance.Level1HiScore)
            {
                HighScore = HeadManager.Instance.Level1HiScore;
            }
        }
        
    }


    public void LevelFinished()
    {
        ScoringUI.SetActive(true);
        if (shots == par)
        {
            score = shots * 1000;
            ScoreName = "Par";
            ScoreNameText.text = ScoreName;
        }

        if (shots > par)
        {
            punishment = shots - par;
            score = par * 1000 - punishment * 500;
            switch (punishment)
            {
                case 1:
                    ScoreName = "Bogey";
                    break;
                case 2:
                    ScoreName = "Double Bogey";
                    break;
                case 3:
                    ScoreName = "Triple Bogey";
                    break;
                case 4:
                    ScoreName = "Quadruple Bogey";
                    break;
                default:
                    ScoreName = (punishment + " Over Par");
                    break;
            }
            ScoreNameText.text = ScoreName;   

        }

        if (shots < par)
        {
            reward = par - shots;

            int ScoreFinder = shots - par;

            score = par * 1000 + reward * 1000;

            switch (ScoreFinder)
            {
                case -1:
                    ScoreName = "Birdie";
                    break;
                case -2:
                    ScoreName = "Eagle";
                    break;
                case -3:
                    ScoreName = "Albatross";
                    break;
                case -4:
                    ScoreName = "Condor";
                    break;
                default:
                    ScoreName = "Super Condor";
                    break;
            }
            if (shots == 1)
            {
                HoleInOne();
            }

            ScoreNameText.text = ScoreName;
        }

        //ScoreText.text = "Your Score: " + score;
        if (score > HighScore)
        {
            HighScore = score;
            //DataCourier.HighScore = HighScore;
            //DataCourier.ReportToManager();
            HeadManager.Instance.AddScore(this);
        }



    }

    private void FixedUpdate()
    {
        if (score == 0 || score == tempscore) return;

        if(score>0) tempscore += 50;
        if (score < 0) tempscore -=50;
        if (tempscore >= StarScore1) Star1.SetActive(true);
        if (tempscore >= StarScore2) Star2.SetActive(true);
        if (tempscore >= StarScore3) Star3.SetActive(true);
        if (tempscore >= SuperStarScore)
        {
            SuperStar.SetActive(true);
            Star2.SetActive(false);
        }

        ScoreText.text = "Your Score: " + tempscore;
    }

    private void HoleInOne()
    {
        ScoreName = "Hole in One";
        score = 99950;
        ScoreNameText.text = ScoreName;
    }

    private void ReportToManager()
    {
        //HeadManager.Instance.AddScore(this);
    }

}
