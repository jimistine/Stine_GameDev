using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationDirectionController : MonoBehaviour
{

	public GameObject Character;
	Animator ani_this;

	void Start () 
	{
		ani_this = gameObject.GetComponent<Animator> ();
	}
	
	void Update () {
		if (Character.GetComponent<Rigidbody2D>().velocity.x > 0)
		{
			ani_this.SetBool ("ifWalkingLeft", false);
			ani_this.SetBool ("ifLeft", false);
			ani_this.SetBool ("ifWalking", true);
		}
		if (Character.GetComponent<Rigidbody2D>().velocity.x < 0)
		{
			ani_this.SetBool ("ifWalkingLeft", true);
			ani_this.SetBool ("ifLeft", true);
		}
		if (Character.GetComponent<Rigidbody2D>().velocity.x == 0)
		{
			ani_this.SetBool ("ifWalkingLeft", false);
			ani_this.SetBool ("ifWalking", false);

		}
		
		
	}
}
