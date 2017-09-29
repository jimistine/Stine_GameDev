using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ButtonController: MonoBehaviour {

	public Button goBackButton;
	public Button quitButton;

	public void GoBack(){
		Camera.main.enabled = false;
		SceneManager.LoadScene ("Rooms");
	}

	public void QuitGame(){
		Application.Quit ();
	}

}
