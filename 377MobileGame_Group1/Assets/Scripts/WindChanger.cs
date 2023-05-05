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
    [SerializeField]
    private bool Enabled;
    public int GenerateWindDirection()
    {
        if (Enabled)
        {
            wind = Random.Range(-90, 91);
            WindLevel.text = "Wind Level: " + wind;
            Arrow.rectTransform.rotation = Quaternion.Euler(0, 0, wind);
            return wind;
        }
        return 0;
    }

    public int GenerateWindPower()
    {
        if (Enabled)
        {
            wind = Random.Range(15, 36);
            WindMPH.text = "MPH: " + wind;
            return wind;
        }
        return 0;
    }
}
