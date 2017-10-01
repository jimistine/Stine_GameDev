using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LeaveRooms : MonoBehaviour
{
	public GameObject question;
	public bool PortalVisible;

	void OnTriggerStay2D(Collider2D other)
	{
		Debug.Log("Here!");
		if (GM.Me.ExitOpen && Input.GetKeyUp(KeyCode.Return))
		{
			PortalVisible = true;
			Debug.Log("Leaving Rooms");
			SceneManager.LoadScene("TempEndScene");
		}
		
	}
	
	private void OnTriggerEnter2D(Collider2D other)
	{
		if (GM.Me.ExitOpen)
		{
			question.SetActive(true);
		}
	}
	private void OnTriggerExit2D(Collider2D other)
	{
		if (GM.Me.ExitOpen)
		{
			question.SetActive(false);
		}
	}

	
}

