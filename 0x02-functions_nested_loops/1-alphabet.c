#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabet[i]; i++)
		_putchar(alphabet[i]);

	_putchar('\n');
}

