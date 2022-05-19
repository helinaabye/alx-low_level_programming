#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - is a function that adds a new node at the start of a list_t list
 * @str: is the string input
 * @head: is the pointer to the start of the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int size = 0;
	char *str2;

	str2 = strdup(str);

	if (str2 == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = str2;
	new->next = *head;
	while (*str2)
	{
		size++;
		str2++;
	}
	new->len = size;
	*head = new;

	return (new);
}
