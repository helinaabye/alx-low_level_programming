#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - is a function that frees the memory of a list
 * @head: is the pointer to the start of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(temp);
	*head = NULL;
}
