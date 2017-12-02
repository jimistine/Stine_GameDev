using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinalTextDelay : MonoBehaviour {
	
	public GameObject Body;
	public GameObject Header;
	public float HeaderDelay;
	public float BodyDelay;
	
	// Use this for initialization
	void Start () {
		StartCoroutine(ExecuteHeader(HeaderDelay));
		StartCoroutine(ExecuteBody(BodyDelay));

	}
	
	IEnumerator ExecuteHeader(float Delay)
	{
		yield return new WaitForSeconds(Delay);
		// Code to execute after the delay
		Header.SetActive(true);
	}	
	
	IEnumerator ExecuteBody(float Delay)
	{
		yield return new WaitForSeconds(Delay);
		// Code to execute after the delay
		Body.SetActive(true);
	}	
}
