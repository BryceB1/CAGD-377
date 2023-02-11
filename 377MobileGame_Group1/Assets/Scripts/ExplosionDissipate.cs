using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosionDissipate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(DestructionCountdown());


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator DestructionCountdown()
    {

        yield return new WaitForSeconds(1);
        Destroy(this.gameObject);
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Destroyable")
        {
            Debug.Log("Hit Destroyable");
            Destroy(other.gameObject);
        }
    }


}
