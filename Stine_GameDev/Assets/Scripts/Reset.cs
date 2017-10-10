using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class Reset : MonoBehaviour {


	public void Update()
	{	
		// Restart
		if (Input.GetKeyDown(KeyCode.R))
		{
			SceneManager.LoadScene("Rooms");
		}
	}
}
