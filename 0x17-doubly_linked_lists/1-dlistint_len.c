#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: head of node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (dlistint_len(h->next) + 1);
}
