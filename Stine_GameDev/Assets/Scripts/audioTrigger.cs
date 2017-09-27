using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioTrigger : MonoBehaviour
{

	public Collider2D audioCollider;
	private bool audioTrue;
	

	private void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return) && audioTrue)
		{
			Debug.Log("speaking");
			GetComponent<AudioSource> ().Play ();
			audioTrue = false;
		}
	}
}
