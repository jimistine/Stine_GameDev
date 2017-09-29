using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class AudioTrigger : MonoBehaviour
{
	public Collider2D audioCollider;
	public GameObject DialoguePing;
	
	private void OnTriggerStay2D(Collider2D other)
	{
		DialoguePing.SetActive(true);
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.Count == 0)
		{
			GM.Me.play1();
			GM.Me.Count = 1;
		}
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.Count == 2)
		{
			GM.Me.play3();
		}
	}

	private void OnTriggerExit2D(Collider2D other)
	{
		DialoguePing.SetActive(false);
	}
}
