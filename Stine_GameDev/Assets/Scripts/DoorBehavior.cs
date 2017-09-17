using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorBehavior : MonoBehaviour
{

	public GameObject doorClosed;
	public GameObject doorOpen;

	private void OnTriggerStay2D(Collider2D other)
	{
		Debug.Log("we in the zone");
		if (gameObject.name == "door_closed" && Input.GetKeyUp(KeyCode.Return))
		{
			GM.Me.openDoor1();
		}
		if (gameObject.name == "door_open" && Input.GetKeyUp(KeyCode.Return))
		{
			GM.Me.closeDoor1();
		}
	}
}
