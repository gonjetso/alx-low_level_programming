#include "lists.h"

/**
 * free_list - function
 * @head: head
 * Return: zero
 */

void free_list(list_t *head)
{
	list_t *thelist;

	while ((thelist = head) != NULL)
	{
		head = head->next;
		free(thelist->str);
		free(thelist);
	}
}
