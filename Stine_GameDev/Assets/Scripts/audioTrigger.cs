using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class AudioTrigger : MonoBehaviour
{
	public Collider2D audioCollider;
	
	private void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.play1();
			GM.Me.Count = 1;
			Debug.Log("0");
			
		}
	}
}
