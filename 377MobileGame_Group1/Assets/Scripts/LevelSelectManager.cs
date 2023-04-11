using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelSelectManager : MonoBehaviour
{
    public int Level1Highscore, Level2Highscore, Level3Highscore, Level4Highscore;

    public int BLevel1Highscore, BLevel2Highscore, BLevel3Highscore, BLevel4Highscore;

    public Text Level1Score, Level2Score, Level3Score, Level4Score;

    public Text BLevel1Score, BLevel2Score, BLevel3Score, BLevel4Score;

    //public LevelObject Object1, Object2, Object3;

    [SerializeField]
    private GameObject Level1Star1, Level1Star2, Level1Star3, Level1Star4, Level2Star1, Level2Star2, Level2Star3, Level2Star4, Level3Star1, Level3Star2, Level3Star3, Level3Star4;
    [SerializeField]
    private GameObject Level4Star1, Level4Star2, Level4Star3, Level4Star4;
    [SerializeField]
    private GameObject BLevel1Star1, BLevel1Star2, BLevel1Star3, BLevel1Star4, BLevel2Star1, BLevel2Star2, BLevel2Star3, BLevel2Star4, BLevel3Star1, BLevel3Star2, BLevel3Star3, BLevel3Star4;
    [SerializeField]
    private GameObject BLevel4Star1, BLevel4Star2, BLevel4Star3, BLevel4Star4;
    [SerializeField]
    private Button Level1Button, Level2Button, Level3Button, Level4Button, Level5Button, Level6Button;
    [SerializeField]
    private Text StarCounter;
    private int Stars;

    private int Page = 1;
    [SerializeField]
    private GameObject Page1UI, Page2UI;

    public void EnterLevel(int scene)
    {
        SceneManager.LoadScene(scene);
    }

    private void Start()
    {
        Level1Highscore = HeadManager.Instance.Level1HiScore;
        Level2Highscore = HeadManager.Instance.Level2HiScore;
        Level3Highscore = HeadManager.Instance.Level3HiScore;
        Level4Highscore = HeadManager.Instance.Level4HiScore;

        Level1Score.text = "Highscore: " + Level1Highscore;
        Level2Score.text = "Highscore: " + Level2Highscore;
        Level3Score.text = "Highscore: " + Level3Highscore;
        Level4Score.text = "Highscore: " + Level4Highscore;

        BLevel1Highscore = HeadManager.Instance.BLevel1HiScore;
        BLevel2Highscore = HeadManager.Instance.BLevel2HiScore;
        BLevel3Highscore = HeadManager.Instance.BLevel3HiScore;
        BLevel4Highscore = HeadManager.Instance.BLevel4HiScore;

        BLevel1Score.text = "Highscore: " + BLevel1Highscore;
        BLevel2Score.text = "Highscore: " + BLevel2Highscore;
        BLevel3Score.text = "Highscore: " + BLevel3Highscore;
        BLevel4Score.text = "Highscore: " + BLevel4Highscore;


        LevelStars();
    }

    private void LevelStars()
    {
        if (Level1Highscore >= HeadManager.Instance.Level1Star1 && Level1Highscore != 0)
        {
            Level1Star1.SetActive(true);
            Stars++;
        }
        if (Level1Highscore >= HeadManager.Instance.Level1Star2 && Level1Highscore != 0)
        {
            Level1Star2.SetActive(true);
            Stars++;
        }
        if (Level1Highscore >= HeadManager.Instance.Level1Star3 && Level1Highscore != 0)
        {
            Level1Star3.SetActive(true);
            Stars++;
        }
        if (Level1Highscore >= HeadManager.Instance.Level1Star4 && Level1Highscore != 0) 
        {
            Level1Star4.SetActive(true);
            Stars++;
        }


        if (Level2Highscore >= HeadManager.Instance.Level2Star1 && Level2Highscore != 0)
        {
            Level2Star1.SetActive(true);
            Stars++;
        }
        if (Level2Highscore >= HeadManager.Instance.Level2Star2 && Level2Highscore != 0)
        {
            Level2Star2.SetActive(true);
            Stars++;
        }
        if (Level2Highscore >= HeadManager.Instance.Level2Star3 && Level2Highscore != 0)
        {
            Level2Star3.SetActive(true);
            Stars++;
        }
        if (Level2Highscore >= HeadManager.Instance.Level2Star4 && Level2Highscore != 0)
        {
            Level2Star4.SetActive(true);
            Stars++;
        }

        if (Level3Highscore >= HeadManager.Instance.Level3Star1 && Level3Highscore != 0)
        {
            Level3Star1.SetActive(true);
            Stars++;
        }
        if (Level3Highscore >= HeadManager.Instance.Level3Star2 && Level3Highscore != 0)
        {
            Level3Star2.SetActive(true);
            Stars++;
        }
        if (Level3Highscore >= HeadManager.Instance.Level3Star3 && Level3Highscore != 0)
        {
            Level3Star3.SetActive(true);
            Stars++;
        }
        if (Level3Highscore >= HeadManager.Instance.Level3Star4 && Level3Highscore != 0)
        {
            Level3Star4.SetActive(true);
            Stars++;
        }

        if (Level4Highscore >= HeadManager.Instance.Level4Star1 && Level4Highscore != 0)
        {
            Level4Star1.SetActive(true);
            Stars++;
        }
        if (Level4Highscore >= HeadManager.Instance.Level4Star2 && Level4Highscore != 0)
        {
            Level4Star2.SetActive(true);
            Stars++;
        }
        if (Level4Highscore >= HeadManager.Instance.Level4Star3 && Level4Highscore != 0)
        {
            Level4Star3.SetActive(true);
            Stars++;
        }
        if (Level4Highscore >= HeadManager.Instance.Level4Star4 && Level4Highscore != 0)
        {
            Level4Star4.SetActive(true);
            Stars++;
        }


        if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star1 && BLevel1Highscore != 0)
        {
            BLevel1Star1.SetActive(true);
            Stars++;
        }
        if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star2 && BLevel1Highscore != 0)
        {
            BLevel1Star2.SetActive(true);
            Stars++;
        }
        if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star3 && BLevel1Highscore != 0)
        {
            BLevel1Star3.SetActive(true);
            Stars++;
        }
        if (BLevel1Highscore >= HeadManager.Instance.BLevel1Star4 && BLevel1Highscore != 0)
        {
            BLevel1Star4.SetActive(true);
            Stars++;
        }


        if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star1 && BLevel2Highscore != 0)
        {
            BLevel2Star1.SetActive(true);
            Stars++;
        }
        if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star2 && BLevel2Highscore != 0)
        {
            BLevel2Star2.SetActive(true);
            Stars++;
        }
        if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star3 && BLevel2Highscore != 0)
        {
            BLevel2Star3.SetActive(true);
            Stars++;
        }
        if (BLevel2Highscore >= HeadManager.Instance.BLevel2Star4 && BLevel2Highscore != 0)
        {
            BLevel2Star4.SetActive(true);
            Stars++;
        }

        if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star1 && BLevel3Highscore != 0)
        {
            BLevel3Star1.SetActive(true);
            Stars++;
        }
        if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star2 && BLevel3Highscore != 0)
        {
            BLevel3Star2.SetActive(true);
            Stars++;
        }
        if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star3 && BLevel3Highscore != 0)
        {
            BLevel3Star3.SetActive(true);
            Stars++;
        }
        if (BLevel3Highscore >= HeadManager.Instance.BLevel3Star4 && BLevel3Highscore != 0)
        {
            BLevel3Star4.SetActive(true);
            Stars++;
        }

        if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star1 && BLevel4Highscore != 0)
        {
            BLevel4Star1.SetActive(true);
            Stars++;
        }
        if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star2 && BLevel4Highscore != 0)
        {
            BLevel4Star2.SetActive(true);
            Stars++;
        }
        if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star3 && BLevel4Highscore != 0)
        {
            BLevel4Star3.SetActive(true);
            Stars++;
        }
        if (BLevel4Highscore >= HeadManager.Instance.BLevel4Star4 && BLevel4Highscore != 0)
        {
            BLevel4Star4.SetActive(true);
            Stars++;
        }



        StarCounter.text = "Current Stars: " + Stars;
        if (Stars > 0) Level2Button.interactable = true;
        if (Stars > 1) Level3Button.interactable = true;
        if (Stars > 2) Level4Button.interactable = true;
        if (Stars > 3) Level5Button.interactable = true;
        if (Stars > 4) Level6Button.interactable = true;
        //if (Stars > 5) Level7Button.interactable = true;
        //if (Stars > 6) Level8Button.interactable = true;


    }

    public void PageLeft()
    {
        if (Page == 2)
        {
            Page = 1;
            Page1UI.SetActive(true);
            Page2UI.SetActive(false);
        }
    }

    public void PageRight()
    {
        if (Page == 1)
        {
            Page = 2;
            Page1UI.SetActive(false);
            Page2UI.SetActive(true);
        }
    }

}
