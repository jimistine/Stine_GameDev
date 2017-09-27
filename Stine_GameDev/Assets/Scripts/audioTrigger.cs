using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class audioTrigger : MonoBehaviour
{
	private bool played;
	public Collider2D audioCollider;
//	private bool audioTrue;
	
	void Start()
	{
		played = false;
	}

	void Update()
	{
		if (played)
		{
			Debug.Log("1");
			float t = Time.time;
			if (Time.time - t > 1f)
			{
				GM.Me.play1();
				GM.Me.Count = 1;
				Debug.Log("2");
				
				played = false;
			}
		}

	}
	
	private void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return))
		{
//			GM.Me.play1();
//			GM.Me.Count = 1;
//			audioTrue = false;
			Debug.Log("0");
			played = true;
		}
	}
}
