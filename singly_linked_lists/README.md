# Singly Linked Lists

This project contains C programs that demonstrate how to use singly linked lists.

## Learning Objectives

At the end of this project, you should be able to explain:

- When and why using linked lists vs arrays
- How to build and use linked lists
- How to use structures
- How to use `typedef`

---

## Files

| File | Description |
|------|-------------|
| `lists.h` | Header file containing prototypes and structure definitions |
| `0-print_list.c` | Prints all elements of a linked list |
| `1-list_len.c` | Returns the number of elements in a linked list |
| `2-add_node.c` | Adds a node at the beginning of a linked list |
| `3-add_node_end.c` | Adds a node at the end of a linked list |
| `4-free_list.c` | Frees a linked list |

---

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
