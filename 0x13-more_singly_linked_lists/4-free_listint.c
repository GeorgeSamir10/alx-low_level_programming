#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to head of listint_t list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
