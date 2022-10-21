#include "lists.h"

/**
 * add_node_end - function
 * @head: head
 * @str: string
 * Return: zero
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t nchar;
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	newnode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (*head);
}
