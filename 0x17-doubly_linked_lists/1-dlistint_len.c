#include "lists.h"

/**
 * dlistint_len - counters the number of elements in a linked list.
 * @h: head pointer to the linked list.
 *
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	dlistint_t *_tempo = (dlistint_t *)h;

	while (_tempo != NULL)
	{
		counter++;
		_tempo = _tempo->next;
	}
	return (counter);
}
