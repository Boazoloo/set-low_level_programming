#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
 */

unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to head pointer
 * @str: string to duplicate
 *
 * Return: address of new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

