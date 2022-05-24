#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - is a function that deletes the head node of a list
 * @head: is the pointer to the start of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tempn;

	if (*head == NULL)
		return (0);
	temp = *head;
	tempn = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (tempn);
}
