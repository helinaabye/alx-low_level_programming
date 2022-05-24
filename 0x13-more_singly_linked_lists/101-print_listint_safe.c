#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - is a function that counts unique nodes
 * @head: is a pointer to the start of the list 
 * Return: the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp1, *temp2;
	size_t s = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp1 = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp1 == temp2)
		{
			temp1 = head;
			while (temp1 != temp2)
			{
				s++;
				temp1 = temp1->next;
				temp2 = temp2->next;
			}

			temp1 = temp1->next;
			while (temp1 != temp2)
			{
				s++;
				temp1 = temp1->next;
			}

			return (s);
		}
		temp1 = temp1->next;
		temp2 = (temp2->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - is a function that prints a listint_t list
 * @head: is a pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t s, i = 0;

	s = looped_listint_len(head);
	if (s == 0)
	{
		for (; head != NULL; s++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < s; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (s);
}
