#include "lists.h"

/*
 * add_node - Adds a new node
 * @head: the list to which it will be added
 * @str: the value of str
 * Return: returns an address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int x = 0;
	list_t *new;

	while (str[x])
		x++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = x;
	new->next = *head;
	*head = new;
	return (new);
}
