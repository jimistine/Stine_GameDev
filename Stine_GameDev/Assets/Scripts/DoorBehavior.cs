using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorBehavior : MonoBehaviour
{

	public GameObject doorClosed;
	public GameObject doorOpen;
	public Collider2D doorCol;

	private void OnTriggerStay2D(Collider2D other)
	{
		Debug.Log("we in the zone");
		if (other.gameObject.tag == "player" && Input.GetKeyDown(KeyCode.Return))
		{
			if (doorClosed == true)
			{
				doorClosed.SetActive(false);
				doorOpen.SetActive(true);
				Debug.Log("open door");
			}else
			{
				doorClosed.SetActive(true);
				doorOpen.SetActive(false);
				Debug.Log("close door");
			}
	}
	}
}
