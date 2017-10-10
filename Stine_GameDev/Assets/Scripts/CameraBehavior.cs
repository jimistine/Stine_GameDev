using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices.ComTypes;
using UnityEngine;
using UnityEngine.UI;
using UnityEngineInternal;

public class CameraBehavior : MonoBehaviour {

	public GameObject Cam1;
	public GameObject Cam2;
	public GameObject Cam3;

	private void OnTriggerEnter2D(Collider2D other)
	{
		if (gameObject.name == "cameraThresh1" && other.gameObject.tag == "player")
		{
			GM.Me.activateCam2();
			GM.Me.player1To2();
			GM.Me.openDoor2();
		}
		
		if (gameObject.name == "cameraThresh2" && other.gameObject.tag == "player")
		{
			GM.Me.activateCam1();
			GM.Me.player2To1();
			GM.Me.openDoor1();

			if (GM.Me.Count == 1)
			{
				GM.Me.play2();
			}
		}
		if (gameObject.name == "cameraThresh3" && other.gameObject.tag == "player")
		{
			GM.Me.activateCam3();
			GM.Me.player2To3();
			GM.Me.openDoor4();
		}
		if (gameObject.name == "cameraThresh4" && other.gameObject.tag == "player")
		{
			GM.Me.activateCam2();
			GM.Me.player3To2();
			GM.Me.openDoor3();
		}
	}
	
	void Update() {
 
		//manually switch between cameras for testing
		if (Input.GetKeyDown(KeyCode.I)) {
			GM.Me.activateCam1();
		}
		if (Input.GetKeyDown(KeyCode.O)) {
			GM.Me.activateCam2();
		}
		if (Input.GetKeyDown(KeyCode.P)) {
			GM.Me.activateCam3();
		}	
	}
}
