#include "lists.h"

/**
 * add_node - function
 * @head: head
 * @str: string
 * Return: zero
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t num;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	newnode->len = num;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
