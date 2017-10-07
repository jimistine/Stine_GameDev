using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using NUnit.Framework.Constraints;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(AudioSource))]
public class GM : MonoBehaviour
{
	public static GM Me;
	
	public int Count = 0;
	public float uTime;
	
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
	public GameObject Paint1Cam;
	public GameObject key;
	public GameObject portal;
	public GameObject book1_Active;
	public GameObject Book1Page;
	public GameObject Book1Text;
	public GameObject book2_Active;
	public GameObject Book2Page;
	public GameObject Book2Text;
	public GameObject painting1_Ring;


	public AudioClip openDoor;
	public AudioClip closeDoor;
	public AudioClip line0;
	public AudioClip line1;
	public AudioClip line2;
	public AudioClip line3;
	public AudioSource SFX;
	public AudioSource Dialogue;

	public Transform playerTrans;
	public Rigidbody2D playerRigidbody2D;

	public bool exitLocked = true;
	public bool ExitOpen;
	public bool BookOpen;


	void Awake()
	{
		Me = this;
		Dialogue.clip = line0;
		Dialogue.PlayDelayed(2);
	}

	public void Update()
	{
//		Debug.Log(Count);
//		uTime = Time.time;
		
		// Restart
		if (Input.GetKeyDown(KeyCode.R))
		{
			SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		}
	}

	//Doors
	public void openDoor1()
	{
		doorOpen.SetActive(true);
		doorClosed.SetActive(false);
		SFX.clip = openDoor;
		SFX.Play();
	}

	public void closeDoor1()
	{
		doorOpen.SetActive(false);
		doorClosed.SetActive(true);
		SFX.clip = closeDoor;
		SFX.Play();
	}

	public void openDoor2()
	{
		doorOpen2.SetActive(true);
		doorClosed2.SetActive(false);
		SFX.clip = openDoor;
		SFX.Play();
	}

	public void closeDoor2()
	{
		doorOpen2.SetActive(false);
		doorClosed2.SetActive(true);
		SFX.clip = closeDoor;
		SFX.Play();
	}

	public void openDoor3()
	{
		doorOpen3.SetActive(true);
		doorClosed3.SetActive(false);
		SFX.clip = openDoor;
		SFX.Play();
	}

	public void closeDoor3()
	{
		doorOpen3.SetActive(false);
		doorClosed3.SetActive(true);
		SFX.clip = closeDoor;
		SFX.Play();
	}

	public void openDoor4()
	{
		doorOpen4.SetActive(true);
		doorClosed4.SetActive(false);
		SFX.clip = openDoor;
		SFX.Play();
	}

	public void closeDoor4()
	{
		doorOpen4.SetActive(false);
		doorClosed4.SetActive(true);
		SFX.clip = closeDoor;
		SFX.Play();
	}

	public void openExit()
	{
		exitDoor.SetActive(false);
		ExitOpen = true;
		SFX.clip = openDoor;
		SFX.Play();
	}

	public void closeExit()
	{
		exitDoor.SetActive(true);
		ExitOpen = false;
		SFX.clip = closeDoor;
		SFX.Play();
	}

	//Cameras
	public void activateCam1()
	{
		Cam1.SetActive(true);
		Cam2.SetActive(false);
		Cam3.SetActive(false);
		Paint1Cam.SetActive(false);
	}

	public void activateCam2()
	{
		Cam1.SetActive(false);
		Cam2.SetActive(true);
		Cam3.SetActive(false);
		Paint1Cam.SetActive(false);
	}

	public void activateCam3()
	{
		Cam1.SetActive(false);
		Cam2.SetActive(false);
		Cam3.SetActive(true);
		Paint1Cam.SetActive(false);
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
		Dialogue.PlayDelayed(3);
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
	public void SetBook1Active() 
	{ 
		book1_Active.SetActive(true);
	}
	public void SetBook1Inactive() 
	{ 
		book1_Active.SetActive(false);
	}
	public void OpenBook1() 
	{ 
		Book1Page.SetActive(true);
		Book1Text.SetActive(true);
		BookOpen = true;
	}

	public void SetBook2Active() 
	{ 
		book2_Active.SetActive(true);
	}
	public void SetBook2Inactive() 
	{ 
		book2_Active.SetActive(false);
	}
	public void OpenBook2() 
	{ 
		Book2Page.SetActive(true);
		Book2Text.SetActive(true);
		BookOpen = true;
	}
	
	public void CloseBook()
	{
		Book1Page.SetActive(false);
		Book1Text.SetActive(false);
		Book2Page.SetActive(false);
		Book2Text.SetActive(false);
		BookOpen = false;
	}

	public void SetPainting1Active()
	{
		painting1_Ring.SetActive(true);
	}
	public void SetPainting1Inactive()
	{
		painting1_Ring.SetActive(false);
	}

	public void EnlargePainting1()
	{
		Cam1.SetActive(false);
		Cam2.SetActive(false);
		Cam3.SetActive(false);
		Paint1Cam.SetActive(true);
	}
	//CALL THIS FUNCTION ON INSPECT SCRIPT
}
