using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GM : MonoBehaviour
{
	public static GM Me;
	public GameObject doorClosed;
	public GameObject doorOpen;

	void Awake ()
	{
		Me = this;
	}
	
	public void Interact()
	{
		
	}

	public void openDoor1()
	{
		doorClosed.SetActive(false);
		doorOpen.SetActive(true);
		Debug.Log("open door");
	}
	public void closeDoor1()
	{
		doorOpen.SetActive(false);
		doorClosed.SetActive(true);
		Debug.Log("close door");
	}


}
