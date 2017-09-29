using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectKey : MonoBehaviour {

	void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return) && GM.Me.Count == 3)
		{
			gameObject.SetActive(false);
			GM.Me.exitLocked = false;
		}
		
	}
}
