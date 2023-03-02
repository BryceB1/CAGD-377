using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    [SerializeField]
    private GameObject Controls1, Controls2, Controls3,ControlButtons;


    // Start is called before the first frame update
    void Start()
    {
        HideControls();
    }

    public void HideControls()
    {
        Controls1.SetActive(false);
        Controls2.SetActive(false);
        //Controls3.SetActive(false);
        ControlButtons.SetActive(false);
    }

    public void DisplayControls()
    {
        Controls1.SetActive(true);
        ControlButtons.SetActive(true);
    }

    public void ShowControls2()
    {
        Controls1.SetActive(false);
        Controls2.SetActive(true);
    }

}
