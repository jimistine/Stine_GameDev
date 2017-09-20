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
		if (gameObject.name == "door_closed" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.openDoor1();
		}
		if (gameObject.name == "door_open" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.closeDoor1();
		}
		if (gameObject.name == "door_closed2" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.openDoor2();
		}
		if (gameObject.name == "door_open2" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.closeDoor2();
		}
		if (gameObject.name == "door_closed3" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.openDoor3();
		}
		if (gameObject.name == "door_open3" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.closeDoor3();
		}
		if (gameObject.name == "door_closed4" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.openDoor4();
		}
		if (gameObject.name == "door_open4" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.closeDoor4();
		}
	}
}
