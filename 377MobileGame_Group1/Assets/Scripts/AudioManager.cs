using UnityEngine.Audio;
using UnityEngine;
using System;

public class AudioManager : MonoBehaviour
{

    public Sound[] Sounds;

    // Start is called before the first frame update
    void Awake()
    {
        foreach (Sound currentsound in Sounds)
        {
            currentsound.Source = gameObject.AddComponent<AudioSource>();
            currentsound.Source.clip = currentsound.Audio;
            currentsound.Source.volume = currentsound.volume;
        }
    }

    public void PlaySound(string SoundName)
    {
        Sound Currentsound = Array.Find(Sounds, sound => sound.Name == SoundName);
        if (Currentsound != null)
        {
            Currentsound.Source.Play();
        }
    }

    public void StopSound(string SoundName)
    {
        Sound Currentsound = Array.Find(Sounds, sound => sound.Name == SoundName);
        if (Currentsound != null)
        {
            Currentsound.Source.Stop();
        }
    }
}
