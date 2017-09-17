using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VR.WSA.Input;

public class PlayerController : MonoBehaviour
{

	public Rigidbody2D PlayerRigidbody2D;
	public float MoveSpeed;

	void Update()
	{
		if (Input.GetAxis("Horizontal") < 0)
		{
			PlayerRigidbody2D.AddForce(Vector2.left * MoveSpeed);
		}
		if (Input.GetAxis("Horizontal") > 0)
		{
			PlayerRigidbody2D.AddForce(Vector2.right * MoveSpeed);
		}

//		if (Input.GetKeyDown(KeyCode.Return))
//		{
//			Interact();
//		}
	}
}
