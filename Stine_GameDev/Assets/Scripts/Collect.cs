using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collect : MonoBehaviour {

	void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.Count == 3 && gameObject.name == "key")
		{
			gameObject.SetActive(false);
			GM.Me.exitLocked = false;
		}
		
	}
}
