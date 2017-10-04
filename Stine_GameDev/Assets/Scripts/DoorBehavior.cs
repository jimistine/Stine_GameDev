using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class DoorBehavior : MonoBehaviour
{

	public GameObject doorClosed;
	public GameObject doorOpen;
	public bool CanOpen;
//	public Collider2D RoomSide;
//	public Collider2D HallSide;

	private void OnTriggerEnter2D(Collider2D other)
	{
		CanOpen = true;
	}

	public void OnTriggerStay2D(Collider2D other)
	{
		if (gameObject.name == "door_closed" && CanOpen && Input.GetKeyDown(KeyCode.Return))
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

	private void OnTriggerExit2D(Collider2D other)
	{
		CanOpen = false;
	}
}
