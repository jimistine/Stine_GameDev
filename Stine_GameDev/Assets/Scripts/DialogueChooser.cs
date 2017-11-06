using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro;
using UnityEngine;

public class DialogueChooser : MonoBehaviour
{


	private TextMeshPro Text1_1;
	private TextMeshPro Text1_2;
	public GameObject Choice1_1;
	public GameObject Choice1_2;
	public GameObject Line5_1Sub;
	public GameObject Line5_2Sub;
	public Color StartColor = Color.white;
	public Color Selected = Color.red;
	public bool TopSelected;

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
			TopSelected = true;

		}
		if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow))
		{
			Text1_1.color = StartColor;
			Text1_2.color = Selected;
			TopSelected = false;
		}

		if (GM.Me.Count == 4)
		{
			if (TopSelected)
			{
				if (Input.GetKeyDown(KeyCode.Return)||Input.GetKeyDown(KeyCode.LeftShift))
				{
					GM.Me.Line4_Sub.SetActive(false);
					Line5_1Sub.SetActive(true);
				}
			}
			if (!TopSelected)
			{
				if (Input.GetKeyDown(KeyCode.Return)||Input.GetKeyDown(KeyCode.LeftShift))
				{
					GM.Me.Line4_Sub.SetActive(false);
					Line5_2Sub.SetActive(true);
				}
			}
		}
		if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.D) ||
		    Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.LeftArrow))
		{
			Line5_1Sub.SetActive(false);
			Line5_2Sub.SetActive(false);
		}
	}
	
	
}
