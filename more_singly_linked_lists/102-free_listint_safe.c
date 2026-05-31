#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely (handles loops)
 * @h: pointer to head pointer
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *nodes[1024];
	listint_t *tmp;
	size_t i, count = 0;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (nodes[i] == *h)
			{
				*h = NULL;
				return (count);
			}
		}

		nodes[count] = *h;
		tmp = (*h)->next;
		free(*h);
		count++;
		*h = tmp;
	}

	*h = NULL;
	return (count);
}

