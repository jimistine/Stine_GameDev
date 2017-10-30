using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngineInternal.Input;

public class Inspect : MonoBehaviour
{

	public GameObject Iring;
	public GameObject InspectResult;
	void Update()
	{	
		//Close Inspect
		
	}

	private void OnTriggerEnter2D(Collider2D other)
	{
		Iring.SetActive(true);
	}
	private void OnTriggerExit2D(Collider2D other)
	{
		Iring.SetActive(false);
	}
	private void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
		{
			InspectResult.SetActive(true);
			GM.Me.Inspecting = true;
			if (gameObject.CompareTag("book"))
			{
				GM.Me.OpenBook.Play();
			}
		}
		
		if (gameObject.name == "painting1" && Input.GetKeyDown(KeyCode.Return) || 
		    gameObject.name == "painting1" && Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.EnlargePainting1();
		}
		if (gameObject.name == "painting2" && Input.GetKeyDown(KeyCode.Return) || 
		    gameObject.name == "painting2" && Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.EnlargePainting2();
		}
		
		if (GM.Me.Inspecting)
		{
			if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D) ||
			    Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.LeftArrow))
			{
				GM.Me.ExitInspect();
				InspectResult.SetActive(false);
				if (gameObject.CompareTag("book"))
				{
					GM.Me.CloseBook.Play();
				}
				
			}
		}
	}

	
	
}

