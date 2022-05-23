#include "lists.h"
#include <stdio.h>
/**
 * print_listint - is a function that prints all elements of a listint_t list
 * @h: is the number input
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
