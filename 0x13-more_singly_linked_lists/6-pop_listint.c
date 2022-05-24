#include "lists.h"
/**
 * pop_listint - is a function that deletes the head node of a list
 * @head: is the pointer to the start of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = (*head)->next;

	return (temp->n);
}
