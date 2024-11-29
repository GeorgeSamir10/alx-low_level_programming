#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a doubly linked list.
 * @head: pointer to the head pointer of a doubly linked list.
 * @n: value to be added to new node.
 *
 * Return: the address of the new element, or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_N, *_cursor = *head;

	node_N = malloc(sizeof(dlistint_t));
	if (node_N == NULL)
		return (NULL);
	node_N->n = n;
	node_N->next = NULL;
	node_N->prev = NULL;
	if (*head == NULL) /** adding the first node to empty list **/
	{
		*head = node_N;
		return (node_N);
	}
	/** adding it to a end of list that already has nodes **/
	while (_cursor->next != NULL)
		_cursor = _cursor->next;
	node_N->prev = _cursor;
	_cursor->next = node_N;
	return (node_N);

}
