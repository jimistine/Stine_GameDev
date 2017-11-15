using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collect : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D other)
	{
		// THIS IS BAD
		if (GM.Me.Count == 2)
		{
			GM.Me.Count = 3;	
		}
		
		if (gameObject.name == "key")
		{
			gameObject.SetActive(false);
			GM.Me.Pickup.Play();
			GM.Me.exitLocked = false;
		}
		
	}
}
