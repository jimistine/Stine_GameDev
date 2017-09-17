using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class GM : MonoBehaviour
{
	public static GM Me;
	public GameObject doorClosed;
	public GameObject doorOpen;
	public GameObject Cam1;
	public GameObject Cam2;
	public GameObject Cam3;
	public Transform playerTrans;
	public Rigidbody2D playerRigidbody2D;

	void Awake ()
	{
		Me = this;
	}
	
	public void Interact()
	{
		
	}
	//Doors
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
	//Cameras
	public void activateCam1()
	{
		Cam1.SetActive(true);
		Cam2.SetActive(false);
		Cam3.SetActive(false);
	}
	public void activateCam2()
	{
		Cam1.SetActive(false);
		Cam2.SetActive(true);
		Cam3.SetActive(false);
	}
	public void activateCam3()
	{
		Cam1.SetActive(false);
		Cam2.SetActive(false);
		Cam3.SetActive(true);
	}
	//Moving player
	public void player1To2()
	{
		playerTrans.Translate(new Vector2(6, 0));
		playerRigidbody2D.velocity = new Vector2(0,0);
	}
	public void player2To1()
	{
		playerTrans.Translate(new Vector2(-7, 0));
		playerRigidbody2D.velocity = new Vector2(0,0);
	}
	public void player2To3()
	{
		playerTrans.Translate(new Vector2(7, 0));
		playerRigidbody2D.velocity = new Vector2(0,0);
	}
	public void player3To2()
	{
		playerTrans.Translate(new Vector2(-7, 0));
		playerRigidbody2D.velocity = new Vector2(0,0);
	}

}
