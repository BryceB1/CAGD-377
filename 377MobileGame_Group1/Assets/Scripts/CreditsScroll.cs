using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreditsScroll : MonoBehaviour
{
    private float ylevel;

    private void Start()
    {
        ylevel = this.gameObject.transform.position.y;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //Debug.Log(ylevel);
        ylevel++;
        gameObject.transform.position = new Vector3(transform.position.x, ylevel, transform.position.z);
    }
}
