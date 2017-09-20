﻿using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class GM : MonoBehaviour
{
	public static GM Me;
	public GameObject doorClosed;
	public GameObject doorOpen;
	public GameObject doorClosed2;
	public GameObject doorOpen2;
	public GameObject doorClosed3;
	public GameObject doorOpen3;
	public GameObject doorClosed4;
	public GameObject doorOpen4;
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
		doorOpen.SetActive(true);
		doorClosed.SetActive(false);
		Debug.Log("open door");
	}public void closeDoor1()
	{
		doorOpen.SetActive(false);
		doorClosed.SetActive(true);
		Debug.Log("close door");
	}
	
	public void openDoor2()
	{
		doorOpen2.SetActive(true);
		doorClosed2.SetActive(false);
		Debug.Log("open door");
	}public void closeDoor2()
	{
		doorOpen2.SetActive(false);
		doorClosed2.SetActive(true);
		Debug.Log("close door");
	}
	
	public void openDoor3()
	{
		doorOpen3.SetActive(true);
		doorClosed3.SetActive(false);
		Debug.Log("open door");
	}	public void closeDoor3()
	{
		doorOpen3.SetActive(false);
		doorClosed3.SetActive(true);
		Debug.Log("close door");
	}
	
	public void openDoor4()
	{
		doorOpen4.SetActive(true);
		doorClosed4.SetActive(false);
		Debug.Log("open door");
	}public void closeDoor4(){
		doorOpen4.SetActive(false);
		doorClosed4.SetActive(true);
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
		//playerRigidbody2D.velocity = new Vector2(0,0);
	}
	public void player2To1()
	{
		playerTrans.Translate(new Vector2(-6.5f, 0));
		//playerRigidbody2D.velocity = new Vector2(0,0);
	}
	public void player2To3()
	{
		playerTrans.Translate(new Vector2(6.5f, 0));
		//playerRigidbody2D.velocity = new Vector2(0,0);
	}
	public void player3To2()
	{
		playerTrans.Translate(new Vector2(-7, 0));
		//playerRigidbody2D.velocity = new Vector2(0,0);
	}

}
