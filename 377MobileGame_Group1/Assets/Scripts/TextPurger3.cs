using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextPurger3 : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private GameObject TutorialText3, TutorialText4;
    void Start()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ball")
        {
            TutorialText3.SetActive(false);
            TutorialText4.SetActive(true);
        }

    }

    // Update is called once per frame
    void Update()
    {

    }
}
