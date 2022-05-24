#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - is a function that gets the nth node of a list
 * @head: is the pointer to the start of the list
 * @index: is the number of the node to be returned
 * Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;
	unsigned int i = 0;

	if (head != NULL)
		temp = head;
	else
		return (NULL);

	while (temp && i <= index)
	{
		if (i == index)
			node = temp;

		temp = temp->next;
		i++;
	}

	return (node);
}
