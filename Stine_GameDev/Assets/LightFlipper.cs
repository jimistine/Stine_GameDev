using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightFlipper : MonoBehaviour
{

	public float vel;
	public float ToMove;
	public float x;
	public float y;
	
	// Use this for initialization
	void Start ()
	{
		vel = GetComponentInParent<Rigidbody2D>().velocity.x;
		x = gameObject.transform.position.x;
		y = gameObject.transform.position.y;

	}
	
	// Update is called once per frame
	void Update () {
		if (vel < 0)
		{
			gameObject.transform.position = new Vector2(x+ToMove,y);
//				.035
		}
	}
}
