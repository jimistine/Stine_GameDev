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
		
		if (GM.Me.Count == 0 && Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.play1();
		}
		if (GM.Me.Count == 2 && Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
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
