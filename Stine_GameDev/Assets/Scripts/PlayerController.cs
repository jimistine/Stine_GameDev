using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using Fungus;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	public float StepDelay;
	public bool FacingLeft;
	public GameObject LeftEye;
	public GameObject RightEye;
	public bool movingLeft;
	public bool movingRight;
	
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
			movingLeft = true;
			movingRight = false;
			GM.Me.Footsteps.Play();
			PlayerRigidbody2D.velocity = -MoveSpeed * move;
			LeftEye.SetActive(true);
			RightEye.SetActive(false);
			ani_this.SetBool("ifSit", false);
		}
		if (Input.GetKeyUp (KeyCode.A) && !movingRight || Input.GetKeyUp(KeyCode.LeftArrow) && !movingRight)
		{
			movingRight = false;	
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
			GM.Me.Footsteps.Stop();
		}	
		// RIGHT
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.D) || 
		    ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.RightArrow))
		{
			movingRight = true;
			movingLeft = false;
			GM.Me.Footsteps.Play();
			PlayerRigidbody2D.velocity = MoveSpeed * move;
			LeftEye.SetActive(false);
			RightEye.SetActive(true);
			ani_this.SetBool("ifSit", false);
		}
		if (Input.GetKeyUp (KeyCode.D) && !movingLeft || Input.GetKeyUp(KeyCode.RightArrow) && !movingLeft)
		{
			movingLeft = false;
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

		if (Input.GetKeyDown(KeyCode.S))
		{
			ani_this.SetBool("ifSit", true);
		}
		if (Input.GetKeyDown(KeyCode.X))
		{
			ani_this.SetBool("ifSit", false);
		}
	}

	public void Sit()
	{
		ani_this.SetBool("ifSit", true);
	}
	public void Stand()
	{
		ani_this.SetBool("ifSit", false);
	}
}
	

