using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeleportDissipate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(DestructionCountdown());


    }

   

    IEnumerator DestructionCountdown()
    {

        yield return new WaitForSeconds(1);
        Destroy(this.gameObject);
    }
}
