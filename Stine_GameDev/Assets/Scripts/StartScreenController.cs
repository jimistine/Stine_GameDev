using System.Collections;
using System.Collections.Generic;
using Fungus;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class StartScreenController : MonoBehaviour
{
	public int IsSelected = 0;
	private TextMeshPro Text1_1;
	private TextMeshPro Text1_2;
	public GameObject Choice1_1;
	public GameObject Choice1_2;
	public GameObject Controls;
	public Color StartColor;
	public Color SelectedColor;

	void Start()
	{
		Text1_1 = Choice1_1.GetComponent<TextMeshPro>();
		Text1_2 = Choice1_2.GetComponent<TextMeshPro>();
		Text1_1.color = StartColor;
	}
	void Update()
	{
		if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
		{
			IsSelected = 1;
		}
		if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
		{
			IsSelected = 2;
		}
		
		if (IsSelected == 0)
		{
			Text1_1.color = StartColor;
			Text1_2.color = StartColor;
		}
		if (IsSelected == 1)
		{
			Text1_1.color = SelectedColor;
			Text1_2.color = StartColor;
		}
		if (IsSelected == 2)
		{
			Text1_1.color = StartColor;
			Text1_2.color = SelectedColor;
		}
		
		if (IsSelected == 1 && Input.GetKeyDown(KeyCode.Return) ||
		    IsSelected == 1 && Input.GetKeyDown(KeyCode.LeftShift))
		{
			Flowchart.BroadcastFungusMessage ("StartGame");
//			SceneManager.LoadScene("Rooms");
		}
		if (IsSelected == 2 && Input.GetKeyUp(KeyCode.Return)||
		    IsSelected == 2 && Input.GetKeyUp(KeyCode.LeftShift))
		{
			Controls.SetActive(true);
			Debug.Log("controls");
			IsSelected = 0;
		}	
	}
}

