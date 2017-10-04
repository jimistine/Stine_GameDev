using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenFromHall : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		if (gameObject.name == "hall_1")
		{
			Debug.Log("triggered");
			GM.Me.openDoor1();
		}
		if (gameObject.name == "hall_2")
		{
			GM.Me.openDoor2();
		}
		if (gameObject.name == "hall_3")
		{
			GM.Me.openDoor3();
		}
		if (gameObject.name == "hall_4")
		{
			GM.Me.openDoor4();
		}
	}
}
