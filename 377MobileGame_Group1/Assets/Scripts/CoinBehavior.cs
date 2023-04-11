using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinBehavior : MonoBehaviour
{
    //[SerializeField]
    private GameObject Tank;
    
    public enum TypeString { BallPlus,StrokeMinus}
    [Header("Coin Settings")]
    [Tooltip("Set the type of PowerUp")]
    public TypeString Typing;
    [Range(2, 10)]
    [Tooltip("Set to the amount of Balls Gained or Stokes Subtracted.")]
    [SerializeField] private int Amount = 2;
    // Start is called before the first frame update

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            //Debug.Log("Ball Detected");
            if (Typing == 0)//BallPlus
            {
                if (Tank.GetComponent<TankUI>())
                {
                    Tank.GetComponent<TankUI>().GainBall(Amount);
                }
                else
                {
                    Tank.GetComponent<MilitaryTankUI>().GainBall(Amount);
                }
                this.gameObject.SetActive(false);
            }
            if (Typing == TypeString.StrokeMinus)  //StrokeMinus
            {
                if (Tank.GetComponent<TankUI>())
                {
                    Tank.GetComponent<TankUI>().LoseStrokes(Amount);
                }
                else
                {
                    Tank.GetComponent<MilitaryTankUI>().LoseStrokes(Amount);
                }
                this.gameObject.SetActive(false);
            }
            
        }
    }

    // Update is called once per frame
    void Start()
    {
        Tank = GameObject.Find("Tank");
    }
}
