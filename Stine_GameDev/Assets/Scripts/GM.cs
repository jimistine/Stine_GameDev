using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
[RequireComponent(typeof(AudioSource))]
public class GM : MonoBehaviour
{
	public static GM Me;
	public int Count;
	public GameObject doorClosed;
	public GameObject doorOpen;
	public GameObject doorClosed2;
	public GameObject doorOpen2;
	public GameObject doorClosed3;
	public GameObject doorOpen3;
	public GameObject doorClosed4;
	public GameObject doorOpen4;
	public GameObject exitDoor;
	public GameObject Cam1;
	public GameObject Cam2;
	public GameObject Cam3;
	public GameObject key;
	public GameObject portal;
	
	public AudioClip openDoor;
	public AudioClip closeDoor;
	public AudioClip line1;
	public AudioClip line2;
	public AudioClip line3;
	public AudioSource SFX;
	public AudioSource Dialogue;
	
	public Transform playerTrans;
	public Rigidbody2D playerRigidbody2D;

	public bool exitLocked = true;
	public bool ExitOpen;
	public float uTime;


	void Awake()
	{
		Me = this;
	}

	public void Update()
	{
		Debug.Log(Count);
//		uTime = Time.time;
	}
	//Doors
	public void openDoor1(){
		doorOpen.SetActive(true);
		doorClosed.SetActive(false);
		SFX.clip = openDoor;
		SFX.Play();
	}public void closeDoor1(){
		doorOpen.SetActive(false);
		doorClosed.SetActive(true);
	}
	public void openDoor2(){
		doorOpen2.SetActive(true);
		doorClosed2.SetActive(false);
	}public void closeDoor2(){
		doorOpen2.SetActive(false);
		doorClosed2.SetActive(true);
	}
	public void openDoor3(){
		doorOpen3.SetActive(true);
		doorClosed3.SetActive(false);
	}public void closeDoor3(){
		doorOpen3.SetActive(false);
		doorClosed3.SetActive(true);
	}
	public void openDoor4(){
		doorOpen4.SetActive(true);
		doorClosed4.SetActive(false);
	}public void closeDoor4(){
		doorOpen4.SetActive(false);
		doorClosed4.SetActive(true);
	}
	public void openExit(){
		exitDoor.SetActive(false);
		ExitOpen = true;
	}public void closeExit(){
		exitDoor.SetActive(true);
		ExitOpen = false;
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
	//Dialogue
	public void play1()
	{
		Count = 1;
		Dialogue.clip = line1;
		Dialogue.Play();	
	}

	public void play2()
	{
		Count = 2;
		Dialogue.clip = line2;
		Dialogue.PlayDelayed(5);
	}
	public void play3()
	{
		Count = 3;
		Dialogue.clip = line3;
		Dialogue.PlayDelayed(1);
	}
	
	//Objects
	public void SetKeyActive()
	{
		key.SetActive(true);
	}
}
