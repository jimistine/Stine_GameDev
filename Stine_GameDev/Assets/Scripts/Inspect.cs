using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngineInternal.Input;

public class Inspect : MonoBehaviour
{

	public GameObject Iring;
	public GameObject InspectResult;
	public GameObject BookCam;
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
		InspectResult.SetActive(false);
		BookCam.SetActive(false);
		GM.Me.ExitInspect();
	}
	private void OnTriggerStay2D(Collider2D other)
	{
		if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
		{
			InspectResult.SetActive(true);
			BookCam.SetActive(true);
			GM.Me.Inspecting = true;
			
			if (gameObject.CompareTag("book"))
			{
				GM.Me.OpenBook.Play();
			}
			if (gameObject.name == "code")
			{
				GM.Me.Count = 2;
			}
		}

		if (GM.Me.Inspecting)
		{
			if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D) ||
			    Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.LeftArrow))
			{
				
				GM.Me.ExitInspect();
				InspectResult.SetActive(false);
				BookCam.SetActive(false);

				if (gameObject.CompareTag("book"))
				{
					GM.Me.CloseBook.Play();
				}
				
			}
		}
	}

	
	
}

