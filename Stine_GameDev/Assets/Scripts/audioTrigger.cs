using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class AudioTrigger : MonoBehaviour
{
	public Collider2D audioCollider;
	public GameObject DialoguePing;
	private float time1;
	

	void Update()
	{
//		Debug.Log("Updating Time:  " + GM.Me.uTime);
		
	}
	
	private void OnTriggerStay2D(Collider2D other)
	{
		DialoguePing.SetActive(true);
		
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.Count == 0)
		{
			GM.Me.play1();
		}
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.Count == 2)
		{
			GM.Me.play3();
			GM.Me.SetKeyActive();
//			float t = Time.time;
//			Debug.Log("Time on talk:  " + t);
//			if (GM.Me.uTime - t > 2f)
//			{
//				Debug.Log("Key active");
//				GM.Me.SetKeyActive();
//			}
		}
	}

	private void OnTriggerExit2D(Collider2D other)
	{
		DialoguePing.SetActive(false);
	}
}
