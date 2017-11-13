using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class WoodCutterController : MonoBehaviour {

	Animator ani_this;
	
	void Start () {
		ani_this = gameObject.GetComponent<Animator> ();
	}

	private void OnTriggerStay2D(Collider2D other)
	{
		if (GM.Me.Count == 0 && Input.GetKeyDown(KeyCode.Return) || 
		    GM.Me.Count == 0 && Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.play2();
			GM.Me.Appear_1.SetActive(true);
		}
		if (GM.Me.Count == 2 && Input.GetKeyDown(KeyCode.Return) ||
		    GM.Me.Count == 2 && Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.play3();
			GM.Me.SetKeyActive();
		}
		if (GM.Me.Count == 3 && Input.GetKeyDown(KeyCode.Return) ||
		    GM.Me.Count == 3 && Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.play4();
		}
		if (GM.Me.Count == 4 && Input.GetKeyDown(KeyCode.Return) ||
		    GM.Me.Count == 4 && Input.GetKeyDown(KeyCode.LeftShift))
		{
			GM.Me.play5();
		}
	}


	public void OnTriggerEnter2D(Collider2D other)
	{
		ani_this.SetBool("Attention", true) ;
	}

	public void OnTriggerExit2D(Collider2D other)
	{
		ani_this.SetBool("Attention", false) ;
	}
}
