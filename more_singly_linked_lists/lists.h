#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list node
 * @n: integer
 * @next: points to next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* 0-print_listint.c */
size_t print_listint(const listint_t *h);

/* 1-listint_len.c */
size_t listint_len(const listint_t *h);

/* 2-add_nodeint.c */
listint_t *add_nodeint(listint_t **head, const int n);

/* 3-add_nodeint_end.c */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* 4-free_listint.c */
void free_listint(listint_t *head);

/* 5-free_listint2.c */
void free_listint2(listint_t **head);

/* 6-pop_listint.c */
int pop_listint(listint_t **head);

/* 7-get_nodeint_at_index.c */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

#endif /* LISTS_H */
