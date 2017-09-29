using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LeaveRooms : MonoBehaviour
{
	public GameObject question;

	private void OnTriggerEnter2D(Collider2D other)
	{
		question.SetActive(true);
	}

	private void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.exitDoor == false)
		{
			Debug.Log("Leaving Rooms");
			SceneManager.LoadScene("TempEndScene");
		}
	}
}
