#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint -adds a new node at the start of a listint_t list
 * @str: is the number input
 * @head: is the pointer to the start of the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
