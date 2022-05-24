#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - is a function that frees a linked list
 * @h: pointer to the start of the list
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int i;
	size_t s;

	if (h || *h == NULL)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;

		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			s++;
		}
		else
		{
			*h = NULL;
			s++;
			break;
		}
	}

	*h = NULL;
	return (s);
}
