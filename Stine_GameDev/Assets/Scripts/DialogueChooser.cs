using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DialogueChooser : MonoBehaviour
{


	private TextMeshPro Text1_1;
	private TextMeshPro Text1_2;
	public GameObject Choice1_1;
	public GameObject Choice1_2;
	public Color StartColor = Color.white;
	public Color Selected = Color.red;

	void Start()
	{
		Text1_1 = Choice1_1.GetComponent<TextMeshPro>();
		Text1_2 = Choice1_2.GetComponent<TextMeshPro>();
		Text1_1.color = StartColor;
	}
	
	void Update () {
		if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow))
		{
			Text1_1.color = Selected;
			Text1_2.color = StartColor;

		}
		if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
		{
			Text1_1.color = StartColor;
			Text1_2.color = Selected;
		}
	}
}
