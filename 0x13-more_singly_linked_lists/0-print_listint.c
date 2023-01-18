#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Elements of listint_t list
 * @h: Head of list_t list
 *
 * Return: Count of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
