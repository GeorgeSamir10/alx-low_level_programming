#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlinked list.
 * @head: pointer to the head pointer of the doubly linked list.
 * @index: index of node to be deleted.
 *
 * Return: 1 if successfull, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *_Temp;
	int node_count = 0, i;

	if ((*head) == NULL || head == NULL)
		return (-1);
	for (_Temp = *head; _Temp != NULL; _Temp = _Temp->next)
		node_count++; /** counting the number of nodes in list **/
	if ((int)index >= node_count)
		return (-1);
	else if (index == 0)
	{
		if (node_count == 1)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		_Temp = (*head)->next;
		free(*head);
		*head = _Temp;
		(*head)->prev = NULL;
		return (1);
	}
	else if ((int)index == (node_count - 1))
	{
		_Temp = *head;
		while (_Temp->next != NULL)
			_Temp = _Temp->next;
		_Temp->prev->next = NULL;
		free(_Temp);
		return (1);
	}
	for (_Temp = *head, i = 0; i < (int)index; i++)
		_Temp = _Temp->next;
	_Temp->prev->next = _Temp->next;
	_Temp->next->prev = _Temp->prev;
	free(_Temp);
	return (1);
}
