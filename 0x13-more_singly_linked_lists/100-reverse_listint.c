#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - is a function that gets the nth node of a list
 * @head: is the pointer to the start of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = *head;
		*head = (*head)->next;
		temp2->next = temp;
		temp = temp2;
	}

	*head = temp2;

	return (*head);
}
