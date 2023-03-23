using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelSelectManager : MonoBehaviour
{
    public int Level1Highscore, Level2Highscore, Level3Highscore;

    public Text Level1Score, Level2Score, Level3Score;

    //public LevelObject Object1, Object2, Object3;

    [SerializeField]
    private GameObject Level1Star1, Level1Star2, Level1Star3, Level1Star4, Level2Star1, Level2Star2, Level2Star3, Level2Star4, Level3Star1, Level3Star2, Level3Star3, Level3Star4;

    public void EnterLevel(int scene)
    {
        SceneManager.LoadScene(scene);
    }

    private void Start()
    {

        Level1Highscore = HeadManager.Instance.Level1HiScore;
        Level2Highscore = HeadManager.Instance.Level2HiScore;
        Level3Highscore = HeadManager.Instance.Level3HiScore;

        Level1Score.text = "Highscore: " + Level1Highscore;
        Level2Score.text = "Highscore: " + Level2Highscore;
        Level3Score.text = "Highscore: " + Level3Highscore;

        LevelStars();
    }

    private void LevelStars()
    {
        if (Level1Highscore >= HeadManager.Instance.Level1Star1 && Level1Highscore != 0)
        {
            Level1Star1.SetActive(true);
        }
        if (Level1Highscore >= HeadManager.Instance.Level1Star2 && Level1Highscore != 0)
        {
            Level1Star2.SetActive(true);
        }
        if (Level1Highscore >= HeadManager.Instance.Level1Star3 && Level1Highscore != 0)
        {
            Level1Star3.SetActive(true);
        }
        if (Level1Highscore >= HeadManager.Instance.Level1Star4 && Level1Highscore != 0) 
        {
            Level1Star4.SetActive(true);
        }


        if (Level2Highscore >= HeadManager.Instance.Level2Star1 && Level2Highscore != 0)
        {
            Level2Star1.SetActive(true);
        }
        if (Level2Highscore >= HeadManager.Instance.Level2Star2 && Level2Highscore != 0)
        {
            Level2Star2.SetActive(true);
        }
        if (Level2Highscore >= HeadManager.Instance.Level2Star3 && Level2Highscore != 0)
        {
            Level2Star3.SetActive(true);
        }
        if (Level2Highscore >= HeadManager.Instance.Level2Star4 && Level2Highscore != 0)
        {
            Level2Star4.SetActive(true);
        }

        if (Level3Highscore >= HeadManager.Instance.Level3Star1 && Level3Highscore != 0)
        {
            Level3Star1.SetActive(true);
        }
        if (Level3Highscore >= HeadManager.Instance.Level3Star2 && Level3Highscore != 0)
        {
            Level3Star2.SetActive(true);
        }
        if (Level3Highscore >= HeadManager.Instance.Level3Star3 && Level3Highscore != 0)
        {
            Level3Star3.SetActive(true);
        }
        if (Level3Highscore >= HeadManager.Instance.Level3Star4 && Level3Highscore != 0)
        {
            Level3Star4.SetActive(true);
        }
    }
}
