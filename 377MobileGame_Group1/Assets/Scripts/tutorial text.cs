using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tutorialtext : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private GameObject TutorialText, TutorialText2;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ball") {
            TutorialText.SetActive(false);
            TutorialText2.SetActive(true);
        }
                
    }
}
