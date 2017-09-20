﻿using System.Collections;
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
	}
}
