using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIWiggle : MonoBehaviour
{
    private int rotation = -150;

    //private string direction;

    private void Start()
    {
        //direction = "left";
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        rotation++;
        rotation++;
        rotation++;
        this.gameObject.GetComponent<RectTransform>().eulerAngles = new Vector3(0, rotation, 0);

        //if (direction=="left")
        //{
        //    rotation++;
        //    this.gameObject.GetComponent<RectTransform>().eulerAngles = new Vector3 (0, rotation, 0);
        //    if (rotation == 150) direction = "right";
        //}
        //else if (direction=="right")
        //{
        //    rotation--;
        //    this.gameObject.GetComponent<RectTransform>().eulerAngles = new Vector3(0, rotation, 0);
        //    if (rotation == -150) direction = "left";
        //}
    }
}
