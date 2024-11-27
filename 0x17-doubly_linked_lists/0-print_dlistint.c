#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list.
 * @h:head pointer of a doubly linked list.
 *
 * Return: number of nodes in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *_TEMP = (dlistint_t *)h;
	size_t counter = 0;

	while (_TEMP != NULL)
	{
		printf("%d\n", _TEMP->n);
		counter++;
		_TEMP = _TEMP->next;
	}
	return (counter);
}
