﻿using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	public float StepDelay;
	public bool FacingLeft;
	
	Vector2 move = new Vector2(1, 0);
	
	Animator ani_this;

	void Start () 
	{
		ani_this = gameObject.GetComponent<Animator> ();
	}

	void Update()
	{
		// LEFT
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.LeftArrow) || 
			ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.A))
		{
			GM.Me.Footsteps.Play();
			PlayerRigidbody2D.velocity = -MoveSpeed * move;
		}
		if (Input.GetKeyUp (KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow)) 
		{
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
			GM.Me.Footsteps.Stop();

		}	
		// RIGHT
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.D) || 
		    ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.RightArrow))
		{
			GM.Me.Footsteps.Play();
			PlayerRigidbody2D.velocity = MoveSpeed * move;
		}
		if (Input.GetKeyUp (KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow)) 
		{
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
			GM.Me.Footsteps.Stop();
			
		}
		// INTERACT
		if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
		{
			ani_this.SetBool ("ifInteract", true);
		}
		if (Input.GetKeyUp (KeyCode.Return) || Input.GetKeyUp(KeyCode.LeftShift)) 
		{
			ani_this.SetBool ("ifInteract", false);
		}
	}
}
	

