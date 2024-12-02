#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list.
 * @head: pointer to the head of a doubly linked list.
 * @index: the index at which the address of the node is to be returned.
 *
 * Return: address of the node at index, NULL if failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *_Temp;
	int count = 0, i;

	if (head == NULL)
		return (NULL);
	/** counting the number of nodes in dlist **/
	for (i = 0, _Temp = head; _Temp != NULL; _Temp = _Temp->next)
		count++;
	if ((int)index >= count) /** index isn't bigger than node count **/
		return (NULL);
	_Temp = head;
	for (i = 0; i < (int)index; i++)
	{
		_Temp = _Temp->next;
	}
	return (_Temp);
}
