using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;


public class DialogueChooser : MonoBehaviour
{
	private TextMeshPro Text1_1;
	private TextMeshPro Text1_2;
	public GameObject Choice1;
	public GameObject Choice1_1;
	public GameObject Choice1_2;
	public GameObject Line5_1Sub;
	public GameObject Line5_2Sub;
	public Color StartColor = Color.white;
	public Color SelectedColor = Color.red;
	public int IsSelected = 0;
	public GameObject LeaveScreen;

	void Start()
	{
		Text1_1 = Choice1_1.GetComponent<TextMeshPro>();
		Text1_2 = Choice1_2.GetComponent<TextMeshPro>();
		Text1_1.color = StartColor;
	}
	
	private void OnTriggerStay2D(Collider2D other)
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
		
		
		if (GM.Me.Count == 4)
		{
			if (IsSelected == 1 && Input.GetKeyDown(KeyCode.Return) ||
		        IsSelected == 1 && Input.GetKeyDown(KeyCode.LeftShift))
				{
					IsSelected = 0;
					Choice1.SetActive(false);
					Line5_1Sub.SetActive(true);
					GM.Me.Line4_Sub.SetActive(false);
					GM.Me.MorganDialogue.SetActive(false);
					GM.Me.Count = 5;
				}
			if (IsSelected == 2 && Input.GetKeyDown(KeyCode.Return)||
			    IsSelected == 2 && Input.GetKeyDown(KeyCode.LeftShift))
				{
					IsSelected = 0;
					Choice1.SetActive(false);
					Line5_2Sub.SetActive(true);
					GM.Me.Line4_Sub.SetActive(false);
					GM.Me.MorganDialogue.SetActive(false);
					GM.Me.Count = 5;
				}
			}
//		if (gameObject.name == "LeaveChoice")
//		{
//			if (IsSelected == 1 && Input.GetKeyDown(KeyCode.Return) ||
//			    IsSelected == 1 && Input.GetKeyDown(KeyCode.LeftShift))
//			{
//				Debug.Log("leaving!");
//				SceneManager.LoadScene("TempEndScene");
//			}
//			if (IsSelected == 2 && Input.GetKeyDown(KeyCode.Return)||
//			    IsSelected == 2 && Input.GetKeyDown(KeyCode.LeftShift))
//			{
//				Debug.Log("not leaving!");
//				IsSelected = 0;
//				GM.Me.FreezePlayer = false;
//				LeaveScreen.SetActive(false);
//			}
//		}
	}
	
	
}
