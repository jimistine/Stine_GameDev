using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger : MonoBehaviour
{

	public Dialogue dialogue;

	public void TriggerDialogue()
	{
		//this next bit can be done with the GM
		FindObjectOfType<DialogueManager>().StartDialogue(dialogue);

	}
}
