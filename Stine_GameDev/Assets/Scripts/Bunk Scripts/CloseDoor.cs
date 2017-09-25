using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseDoor : MonoBehaviour {

	public GameObject doorClosed;
	public GameObject doorOpen;

	private void OnTriggerStay2D(Collider2D other)
	{
		Debug.Log("we in the zone");
		
		if (Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.closeDoor1();
		}
		
	}
}
