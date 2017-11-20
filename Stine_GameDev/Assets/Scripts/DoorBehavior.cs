using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Xml;
using UnityEngine;

public class DoorBehavior : MonoBehaviour
{

	public GameObject doorClosed;
	public GameObject doorOpen;
	public bool IsLocked = true;
	public float Delay;
	Color startColor  = Color.white;
	Color fade = Color.gray;


	

	void Start()
	{
		StartCoroutine(ExecuteAfterTime(Delay));
	}

	
	private void Update()
	{
	}
	
	IEnumerator ExecuteAfterTime(float Delay)
	{
		yield return new WaitForSeconds(Delay);
		// Code to execute after the delay
		IsLocked = false;
	}
	
	public void OnTriggerStay2D(Collider2D other)
	{

		gameObject.GetComponent<SpriteRenderer>().color = fade;
			
		if (IsLocked)
		{
			if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.LockedDoor.Play();
			}
		}
		
		if (IsLocked == false)
		{
			if (gameObject.name == "door_closed" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_closed" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.openDoor1();
			}
			if (gameObject.name == "door_open" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_open" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.closeDoor1();
			}
			if (gameObject.name == "door_closed2" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_closed2" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.openDoor2();
			}
			if (gameObject.name == "door_open2" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_open2" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.closeDoor2();
			}
			if (gameObject.name == "door_closed3" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_closed3" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.openDoor3();
			}
			if (gameObject.name == "door_open3" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_open3" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.closeDoor3();
			}
			if (gameObject.name == "door_closed4" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_closed4" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.openDoor4();
			}
			if (gameObject.name == "door_open4" && Input.GetKeyDown(KeyCode.Return) ||
			    gameObject.name == "door_open4" && Input.GetKeyDown(KeyCode.LeftShift))
			{
				GM.Me.closeDoor4();
			}
		}
	}

	private void OnTriggerExit2D(Collider2D other)
	{
		gameObject.GetComponent<SpriteRenderer>().color = startColor;
	}
}
