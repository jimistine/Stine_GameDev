using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	public bool FacingLeft;
	Vector2 move = new Vector2(1, 0);
	
	Animator ani_this;

	void Start () 
	{
		ani_this = gameObject.GetComponent<Animator> ();
	}

	void Update()
	{
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.A) || 
		    ani_this.GetBool("ifInteract") == false && Input.GetKey(KeyCode.LeftArrow))
		{
			ani_this.SetBool ("ifWalkingLeft", true);
			ani_this.SetBool ("ifLeft", true);
			PlayerRigidbody2D.velocity = -MoveSpeed * move;
//			if (FacingLeft == false)
//			{
//				transform.localScale = new Vector3(-transform.localScale.x, transform.localScale.y, transform.localScale.z);
//				FacingLeft = true;
//			}
		}
		if (Input.GetKeyUp (KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow)) 
		{
			ani_this.SetBool ("ifWalkingLeft", false);
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
		}		
		if (ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.D) || 
		    ani_this.GetBool("ifInteract") == false && Input.GetKeyDown(KeyCode.RightArrow))
		{
			ani_this.SetBool ("ifWalking", true);
			ani_this.SetBool ("ifLeft", false);
			PlayerRigidbody2D.velocity = MoveSpeed * move;
//			if (FacingLeft)
//			{
//				transform.localScale = new Vector3(-transform.localScale.x, transform.localScale.y, transform.localScale.z);
//				FacingLeft = false;
//			}
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
	

