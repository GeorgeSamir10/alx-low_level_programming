#include "lists.h"

/**
 * init_new_node - initializes a new node.
 * @n: value to be added in new node.
 *
 * Return: address of the new node, NULL if failed.
 */
dlistint_t *init_new_node(int n)
{
	dlistint_t *_newnode;

	_newnode = malloc(sizeof(dlistint_t));
	if (_newnode == NULL)
		return (NULL);
	_newnode->n = n;
	_newnode->next = NULL;
	_newnode->prev = NULL;
	return (_newnode);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head pointer of the doubly linked list.
 * @idx: index of where the new node will be added in the list.
 * @n: value to be added in new node.
 *
 * Return: address of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *_newnode = NULL, *temp;
	int node_count = 0, i;

	if (h == NULL)
		return (NULL);
	else if (idx == 0) /** adding at idx 0 in empty list **/
		return (add_dnodeint(h, n));

	for (temp = *h; temp != NULL; temp = temp->next)
		node_count++; /** counting the number of nodes in list **/
	if ((int)idx > node_count) /** checking if index is out of range **/
		return (NULL);
	else if ((int)idx == node_count)
		return (add_dnodeint_end(h, n));

	_newnode = init_new_node(n); /** initialize new node **/
	if (_newnode == NULL)
		return (NULL);
	for (i = 0, temp = *h; i < (int)idx; i++)
		temp = temp->next;
	_newnode->next = temp;
	_newnode->prev = temp->prev;
	temp->prev->next = _newnode;
	temp->prev = _newnode;
	return (_newnode);
}
