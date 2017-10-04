using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inspect : MonoBehaviour {

	void Update()
	{
		//Close Inspect
		if (GM.Me.BookOpen && Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D))
		{
			GM.Me.CloseBook();
		}	
	}
	
	private void OnTriggerEnter2D(Collider2D other)
	{
		if (gameObject.name == "book1")
		{
			GM.Me.SetBook1Active();
		}
	}

	private void OnTriggerExit2D(Collider2D other)
	{
		if (gameObject.name == "book1")
		{
			GM.Me.SetBook1Inactive();
		}
	}

	private void OnTriggerStay2D(Collider2D other)
	{
		if (gameObject.name == "book1" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.OpenBook1();
		}
	}

	
}

