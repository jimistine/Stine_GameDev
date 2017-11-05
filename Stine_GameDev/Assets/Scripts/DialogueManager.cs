 using System.Collections;
using System.Collections.Generic;
 using System.Security.Cryptography.X509Certificates;
 using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour
{

//	public Text nameText;
	public Text dialogueText; 
	
	private Queue<string> sentences;
	
	void Start ()
	{
		sentences = new Queue<string>();
	}

	public void StartDialogue(Dialogue dialogue)
	{
//		Debug.Log("Starting Convo with " + dialogue.Name);

//		nameText.text = dialogue.Name;
		
		sentences.Clear();
		
		foreach (string sentence in dialogue.sentences)
		{
			sentences.Enqueue(sentence);
		}

		DisplayNextSentence();

	}

	public void DisplayNextSentence()
	{
		if (sentences.Count == 0)
		{
			EndDialogue();
			return;
		}

		string sentence = sentences.Dequeue();
		StopAllCoroutines();
		StartCoroutine(TypeSentence (sentence));
//		dialogueText.text = sentence;
//		Debug.Log(sentence);
	}

	IEnumerator TypeSentence(string sentence)
	{
		dialogueText.text = "";
		foreach (char letter in sentence.ToCharArray())
		{
			dialogueText.text += letter;
			yield return null;
		}
	}
	

	void EndDialogue()
	{
		Debug.Log("End of conversation ");
		
	}
}
