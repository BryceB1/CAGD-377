using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextPurge4 : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private GameObject TutorialText5, TutorialText6;
    void Start()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ball")
        {
            TutorialText5.SetActive(false);
            TutorialText6.SetActive(true);
        }

    }

    // Update is called once per frame
    void Update()
    {

    }
}
