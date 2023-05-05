using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomizedTankManager : MonoBehaviour
{
    [SerializeField]
    private Material Green;
    [SerializeField]
    private Material Red;
    [SerializeField]
    private Material Blue;
    [SerializeField]
    private Material CurrentColor;

    private GameObject TankBody;

    public void ChangeColor(string color)
    {
        switch (color)
        {
            case "red":
                CurrentColor = Red;
                break;
            case "blue":
                CurrentColor = Blue;
                break;
            case "green":
                CurrentColor = Green;
                break;
            default:
                CurrentColor = Green;
                break;
        }
    }

    public void ColorTank(GameObject tankbody)
    {
        TankBody = tankbody;
        TankBody.GetComponent<Renderer>().material = CurrentColor;
    }

    
}
