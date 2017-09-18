using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VR.WSA.Input;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;
	public float Move2;

	void Update()
	{
		if(Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		{
			PlayerRigidbody2D.velocity = new Vector2(-Move2,0);
		}
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
