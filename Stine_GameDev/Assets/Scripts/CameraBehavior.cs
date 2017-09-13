using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices.ComTypes;
using UnityEngine;

public class CameraBehavior : MonoBehaviour {

	public GameObject Cam1;
	public GameObject Cam2;
	public GameObject Cam3;
 
	void Start() {
		Cam1.SetActive(true);
		Cam2.SetActive(false);
		Cam3.SetActive(false);
	}
 
	void Update() {
 
		if (Input.GetKeyDown(KeyCode.I)) {
			Cam1.SetActive(true);
			Cam2.SetActive(false);
			Cam3.SetActive(false);
		}
		if (Input.GetKeyDown(KeyCode.O)) {
			Cam1.SetActive(false);
			Cam2.SetActive(true);
			Cam3.SetActive(false);
		}
		if (Input.GetKeyDown(KeyCode.P)) {
			Cam1.SetActive(false);
			Cam2.SetActive(false);
			Cam3.SetActive(true);
		}
	}
}
