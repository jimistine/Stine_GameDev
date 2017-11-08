using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaveRooms : MonoBehaviour
{
	public float Delay;
	public GameObject LeaveScreen;

	private void OnTriggerStay2D(Collider2D other)
	{		
		if (GM.Me.ExitOpen && GM.Me.FreezePlayer == false && Input.GetKeyDown(KeyCode.Return)||
		    GM.Me.ExitOpen && GM.Me.FreezePlayer == false && Input.GetKeyDown(KeyCode.LeftShift))
		{
			StartCoroutine(ExecuteAfterTime(Delay));
		}
	}
	
	IEnumerator ExecuteAfterTime(float Delay)
	{
		yield return new WaitForSeconds(Delay);
		// Code to execute after the delay
//		Debug.Log("Leaving Rooms");
		LeaveScreen.SetActive(true);
		GM.Me.FreezePlayer = true;
	}	
}

