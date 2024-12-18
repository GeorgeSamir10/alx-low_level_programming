#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	insert_dnodeint_at_index(&head, 6, 700);
	insert_dnodeint_at_index(&head, 9, 96);
	insert_dnodeint_at_index(&head, 500, 496);
	printf("HI\n");
	head = NULL;
	insert_dnodeint_at_index(&head, 500, 496);
	printf("HI\n");
	insert_dnodeint_at_index(NULL, 500, 496);
	printf("HI\n");
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
