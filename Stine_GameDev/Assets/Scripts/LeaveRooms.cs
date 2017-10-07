using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LeaveRooms : MonoBehaviour
{
	public GameObject question;
	public bool PortalVisible;
	public float Delay;

	void OnTriggerStay2D(Collider2D other)
	{
		if (GM.Me.ExitOpen && Input.GetKeyDown(KeyCode.Return))
		{
			StartCoroutine(ExecuteAfterTime(2));
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

	IEnumerator ExecuteAfterTime(float Delay)
	{
		yield return new WaitForSeconds(Delay);
		// Code to execute after the delay
		PortalVisible = true;
		Debug.Log("Leaving Rooms");
		SceneManager.LoadScene("TempEndScene");
	}
	
}

