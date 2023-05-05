using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Customizer : MonoBehaviour
{

    public GameObject MainMenuUI;
    public GameObject CustomizerUI;

    public Material Blue;

    public Material Red;

    public Material Green;

    public GameObject TankBody;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ActivateCustomizerUI()
    {
        CustomizerUI.SetActive(true);
        MainMenuUI.SetActive(false);
    }

    public void BackToMain()
    {
        MainMenuUI.SetActive(true);
        CustomizerUI.SetActive(false);
    }

    public void ChangeColor(string Color)
    {
        switch (Color)
        {
            case "red":
                TankBody.GetComponent<Renderer>().material = Red;
                HeadManager.Instance.GetComponent<CustomizedTankManager>().ChangeColor("red");
                break;
            case "blue":
                TankBody.GetComponent<Renderer>().material = Blue;
                HeadManager.Instance.GetComponent<CustomizedTankManager>().ChangeColor("blue");
                break;
            case "green":
                TankBody.GetComponent<Renderer>().material = Green;
                HeadManager.Instance.GetComponent<CustomizedTankManager>().ChangeColor("green");
                break;
            default:
                break;
        }
            
    }

    public void LevelSelect()
    {
        SceneManager.LoadScene(2);
    }

    public void StartGame()
    {
        SceneManager.LoadScene(3);
    }
}
