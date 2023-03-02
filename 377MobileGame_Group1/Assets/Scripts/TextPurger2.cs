using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextPurger2 : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private GameObject TutorialText2, TutorialText3;
    void Start()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ball")
        {
            TutorialText2.SetActive(false);
            TutorialText3.SetActive(true);
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
