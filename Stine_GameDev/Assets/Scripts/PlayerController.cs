using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	public float MoveV;
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
		if (Input.GetKeyDown(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
		{
			ani_this.SetBool ("ifWalk", true);
			PlayerRigidbody2D.velocity = -MoveV * move;
		}
		if (Input.GetKeyUp (KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow)) 
		{
			ani_this.SetBool ("ifWalk", false);
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
		}		
		if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		{
			ani_this.SetBool ("ifWalk", true);
			PlayerRigidbody2D.velocity = MoveV * move;
		}
		if (Input.GetKeyUp (KeyCode.D) || Input.GetKeyUp(KeyCode.RightArrow)) 
		{
			ani_this.SetBool ("ifWalk", false);
			PlayerRigidbody2D.velocity = new Vector2(0, 0);
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
	

