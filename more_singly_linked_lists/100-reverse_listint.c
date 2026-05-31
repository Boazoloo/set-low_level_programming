#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to head pointer
 *
 * Return: pointer to new head (reversed list)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (prev);
}

