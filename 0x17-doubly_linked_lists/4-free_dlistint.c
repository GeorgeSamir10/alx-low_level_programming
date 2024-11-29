#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *_cursor = head;

	while (_cursor != NULL)
	{
		_cursor = _cursor->next;
		free(head);
		head = _cursor;
	}
}
