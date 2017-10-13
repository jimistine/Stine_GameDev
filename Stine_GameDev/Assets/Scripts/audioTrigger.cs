using System;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;

public class AudioTrigger : MonoBehaviour
{
	public Collider2D audioCollider;
	public GameObject DialoguePing;
	private float time1;
	
	private void OnTriggerStay2D(Collider2D other)
	{
		DialoguePing.SetActive(true);
		
		if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift) && GM.Me.Count == 0)
		{
			GM.Me.play1();
		}
		if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift) && GM.Me.Count == 2)
		{
			GM.Me.play3();
			GM.Me.SetKeyActive();
		}
	}

	private void OnTriggerExit2D(Collider2D other)
	{
		DialoguePing.SetActive(false);
	}
}
