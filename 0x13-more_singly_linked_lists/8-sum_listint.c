#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - is a function that sums the data of the nodes
 * @head: is the pointer to the start of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}

	return (i);
}
