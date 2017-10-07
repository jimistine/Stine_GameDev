using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngineInternal.Input;

public class Inspect : MonoBehaviour {

	void Update()
	{
//		
		//Close Inspect
		if (GM.Me.BookOpen && Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D) ||
			GM.Me.BookOpen && Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.LeftArrow))
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
		if (gameObject.name == "book2")
		{
			GM.Me.SetBook2Active();
		}
	}
	private void OnTriggerExit2D(Collider2D other)
	{
		if (gameObject.name == "book1")
		{
			GM.Me.SetBook1Inactive();
		}
		if (gameObject.name == "book2")
		{
			GM.Me.SetBook2Inactive();
		}
	}
	private void OnTriggerStay2D(Collider2D other)
	{
		if (gameObject.name == "book1" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.OpenBook1();
		}
		if (gameObject.name == "book2" && Input.GetKeyDown(KeyCode.Return))
		{
			GM.Me.OpenBook2();
		}
	}

	
	
}

