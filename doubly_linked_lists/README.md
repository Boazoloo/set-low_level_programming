# Doubly Linked Lists (C Project)

This project implements a set of functions that manipulate **doubly linked lists** in C. A doubly linked list is a data structure where each node contains a pointer to both the next and previous nodes, allowing traversal in both directions.

## 📌 Data Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
