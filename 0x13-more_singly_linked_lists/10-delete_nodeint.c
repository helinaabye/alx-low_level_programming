#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - is a function that delets a node in list
 * @head: is the pointer to the start of the list
 * @index: is the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *tempnext;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;

		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	tempnext = temp->next->next;
	free(temp->next);
	temp->next = tempnext;
	return (-1);
}
