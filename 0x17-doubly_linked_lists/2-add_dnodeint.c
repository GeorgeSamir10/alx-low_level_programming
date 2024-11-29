#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list.
 * @head: pointer to the head pointer of the doubly linked list.
 * @n: value to be added at the new node.
 *
 * Return: The address of the new element, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL) /** adding the first node to empty list **/
	{
		*head = newNode;
		return (newNode);
	}
	/** adding it to a list that already has nodes **/
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
