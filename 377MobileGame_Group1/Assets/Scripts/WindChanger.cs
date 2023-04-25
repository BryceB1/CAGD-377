using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WindChanger : MonoBehaviour
{
    private int wind;
    [SerializeField]
    private Text WindLevel;
    [SerializeField]
    private Text WindMPH;
    [SerializeField]
    private RawImage Arrow;
    public int GenerateWindDirection()
    {
        wind = Random.Range(-90, 91);
        WindLevel.text = "Wind Level: " + wind;
        Arrow.rectTransform.rotation = Quaternion.Euler(0, 0, wind);
        return wind;
    }

    public int GenerateWindPower()
    {
        wind = Random.Range(15, 36);
        WindMPH.text = "MPH: " + wind;
        return wind;
    }
}
