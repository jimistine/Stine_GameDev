using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(AudioSource))]
public class GM : MonoBehaviour
{
	public static GM Me;
	
	public int Count = 0;
	public float uTime;
	public Vector2 Transfer_1_2;
	public Vector2 Transfer_2_3;
	public Vector2 Transfer_3_2;
	public Vector2 Transfer_2_1;
	public Transform playerTrans;
	public Rigidbody2D playerRigidbody2D;
	public Transform MorganTrans;
	public Rigidbody2D MorganRigidbody2D;

	public bool exitLocked = true;
	public bool ExitOpen;
	public bool Inspecting;
	public bool Enlarged;
	public bool Reading;

	public float Audio_1_2;
	public float Audio_2_3;
	public float Audio_3_2;
	public float Audio_2_1;

	public AudioClip openDoor;
	public AudioClip closeDoor;
	public AudioClip lockedDoor;
	public AudioClip line1;
	public AudioClip line2;
	public AudioClip line3;
	public AudioSource SFX;
	public AudioSource Dialogue;
	public AudioSource Line_1;
	public AudioSource Line_2;
	public AudioSource LockedDoor;
	public AudioSource Footsteps;
	public AudioSource OpenBook;
	public AudioSource CloseBook;
	public AudioMixerSnapshot Room1;
	public AudioMixerSnapshot Room2;
	public AudioMixerSnapshot Room3;
	
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
	public GameObject Paint2Cam;
	public GameObject key;
	public GameObject portal;
	public GameObject book1_Active;
	public GameObject Book1Page;
	public GameObject Book1Text;
	public GameObject book2_Active;
	public GameObject Book2Page;
	public GameObject Book2Text;
	public GameObject painting1_Ring;


	void Awake()
	{
		Me = this;
		Line_1.PlayDelayed(2);
	}

	public void Update()
	{
//		Debug.Log(Count);		
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
		SFX.PlayOneShot(openDoor);
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

	public void TryLockedExit()
	{
		LockedDoor.PlayOneShot(lockedDoor);
	}

	public void openExit()
	{
		exitDoor.SetActive(false);
		ExitOpen = true;
		SFX.PlayOneShot(openDoor);
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

//Room Transitions
	public void player1To2()
	{
		playerTrans.Translate(Transfer_1_2);
		MorganTrans.Translate(Transfer_1_2);
		Room2.TransitionTo(Audio_1_2);
	}

	public void player2To1()
	{
		playerTrans.Translate(Transfer_2_1);
		MorganTrans.Translate(Transfer_2_1);
		Room1.TransitionTo(Audio_2_1);

	}

	public void player2To3()
	{
		playerTrans.Translate(Transfer_2_3);
		MorganTrans.Translate(Transfer_2_3);
		Room3.TransitionTo(Audio_3_2);
	}

	public void player3To2()
	{
		Debug.Log("3 TO 2");
		playerTrans.Translate(Transfer_3_2);
		MorganTrans.Translate(Transfer_3_2);
		Room2.TransitionTo(Audio_3_2);
	}

//Dialogue
//	void AudioFinished()
//	{
//		Debug.Log("Audio Done!");
//	}
	
	public void play2()
	{
		Count = 1;
		Line_2.Play();
	}

	public void play3()
	{
		Count = 2;
		Dialogue.clip = line2;
		Dialogue.PlayDelayed(3);
	}

	public void play4()
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
	public void OpenBook1() 
	{ 
		
		Book1Page.SetActive(true);
		Book1Text.SetActive(true);
		Inspecting = true;
		Reading = true;
		OpenBook.Play();
	}
	public void OpenBook2() 
	{ 
		Book2Page.SetActive(true);
		Book2Text.SetActive(true);
		Inspecting = true;
		Reading = true;
		OpenBook.Play();
	}

	public void EnlargePainting1()
	{
		Cam2.SetActive(false);
		Paint1Cam.SetActive(true);
		Inspecting = true;
		Enlarged = true;
	}

	public void EnlargePainting2()
	{
		Cam2.SetActive(false);
		Paint2Cam.SetActive(true);
		Inspecting = true;
		Enlarged = true;
	}
	
	public void ExitInspect()
	{
		Inspecting = false;

		if (Enlarged)
		{
			Cam2.SetActive(true);
			Paint1Cam.SetActive(false);
			Paint2Cam.SetActive(false);
			Enlarged = false;
		}
		if (Reading)
		{
			Book1Page.SetActive(false);
			Book1Text.SetActive(false);
			Book2Page.SetActive(false);
			Book2Text.SetActive(false);
			Reading = false;
			CloseBook.Play();
		}
	}
	//CALL THIS FUNCTION ON INSPECT SCRIPT
}
