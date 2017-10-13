using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitDoorBehavior : MonoBehaviour {

	private void OnTriggerStay2D(Collider2D other)
	{
		if (gameObject.name == "door_closed5" && Input.GetKeyDown(KeyCode.Return) && GM.Me.exitLocked || 
		    gameObject.name == "door_closed5" && Input.GetKeyDown(KeyCode.LeftShift) && GM.Me.exitLocked)
		{
			GM.Me.TryLockedExit();
		}
		if (gameObject.name == "door_closed5" && Input.GetKeyDown(KeyCode.Return) && GM.Me.exitLocked == false || 
		    gameObject.name == "door_closed5" && Input.GetKeyDown(KeyCode.LeftShift) && GM.Me.exitLocked == false)
		{
			GM.Me.openExit();
		}
		if (gameObject.name == "door_open5" && Input.GetKeyDown(KeyCode.Return) && GM.Me.exitLocked == false ||
		    gameObject.name == "door_open5" && Input.GetKeyDown(KeyCode.LeftShift) && GM.Me.exitLocked == false)
		{
			GM.Me.closeExit();
		}
	}
}
