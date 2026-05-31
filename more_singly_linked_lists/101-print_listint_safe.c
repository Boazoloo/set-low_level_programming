#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to first node
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nodes[1024];
	size_t i, count = 0;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
		}

		nodes[count] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		head = head->next;
	}

	return (count);
}

