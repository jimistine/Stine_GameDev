using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	public float MoveV;
	Vector2 move = new Vector2 (1,0);

	void Update()
	{
		if(Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		{
			PlayerRigidbody2D.velocity = (-MoveV * move);
		}
		if(Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow))
		{
			PlayerRigidbody2D.velocity = (MoveV * move);
		}
		if (Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.LeftArrow)|| Input.GetKeyUp(KeyCode.D)|| Input.GetKeyUp(KeyCode.RightArrow))
		{
			PlayerRigidbody2D.velocity = new Vector2(0,0);
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
	}
}
