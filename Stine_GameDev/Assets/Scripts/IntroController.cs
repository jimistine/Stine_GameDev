using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IntroController : MonoBehaviour
{


	public GameObject Curtain;
	public float Delay;
	public AudioSource startsfx;
	public GameObject Listener;
	
	// Use this for initialization
	void Start ()
	{
		startsfx.Play();
		GM.Me.FreezePlayer = true;
		StartCoroutine(ExecuteAfterTime(Delay));
	}
	
	IEnumerator ExecuteAfterTime(float Delay)
	{
		yield return new WaitForSeconds(Delay);
		// Code to execute after the delay
		Debug.Log("Removing Curtain");
		Curtain.SetActive(false);
		Listener.SetActive(false);
		GM.Me.FreezePlayer = false;
	}	
}
