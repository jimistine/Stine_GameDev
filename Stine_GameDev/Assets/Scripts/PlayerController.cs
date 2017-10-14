using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	Vector2 move = new Vector2(1, 0);
	
	Animator ani_this;
	Rigidbody2D rig_this;

	void Start () 
	{
		ani_this = gameObject.GetComponent<Animator> ();
		rig_this = gameObject.GetComponent<Rigidbody2D> (); 
	}

	void Update()
	{
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
		{
			ani_this.SetBool ("ifWalking", true);
			PlayerRigidbody2D.velocity = -MoveSpeed * move;
			GM.Me.MorganTrans.eulerAngles = new Vector2(0,180);
		}
		if (Input.GetKeyUp (KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow)) 
		{
			ani_this.SetBool ("ifWalking", false);
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
		}		
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		{
			ani_this.SetBool ("ifWalking", true);
			PlayerRigidbody2D.velocity = MoveSpeed * move;
			GM.Me.MorganTrans.eulerAngles = new Vector2(0,0);
		}
		if (Input.GetKeyUp (KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow)) 
		{
			ani_this.SetBool ("ifWalking", false);
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
		}
		if (Input.GetKeyDown(KeyCode.Return) || Input.GetKeyDown(KeyCode.LeftShift))
		{
			ani_this.SetBool ("ifInteract", true);
		}
		if (Input.GetKeyUp (KeyCode.Return) || Input.GetKeyUp(KeyCode.LeftShift)) 
		{
			ani_this.SetBool ("ifInteract", false);
		}
		
//		if (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.D) ||
//		    Input.GetKeyUp(KeyCode.RightArrow))
//		{
//			PlayerRigidbody2D.velocity = new Vector2(0, 0);
//		}
		
		
		
	}
}


//Old Movement
//		if (Input.GetAxis("Horizontal") < 0)
//		{
//			PlayerRigidbody2D.AddForce(Vector2.left * MoveSpeed);
//		}
//		if (Input.GetAxis("Horizontal") > 0)
//		{
//			PlayerRigidbody2D.AddForce(Vector2.right * MoveSpeed);
//		}

//		if (Input.GetKeyDown(KeyCode.Return))
//		{
//			Interact();
//		}
	

