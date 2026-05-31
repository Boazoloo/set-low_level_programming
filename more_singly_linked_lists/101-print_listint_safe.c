#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a list safely even if it has a loop
 * @head: pointer to list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *tmp;
	size_t count = 0;

	current = head;

	while (current != NULL)
	{
		tmp = head;

		/* check if node already printed */
		while (tmp != current)
		{
			if (tmp == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			tmp = tmp->next;
		}

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* check loop manually */
		if (current->next != NULL)
		{
			const listint_t *checker = head;

			while (checker != current->next && checker != current)
				checker = checker->next;

			if (checker == current->next)
			{
				current = current->next;
				continue;
			}
		}

		current = current->next;
	}

	return (count);
}















































