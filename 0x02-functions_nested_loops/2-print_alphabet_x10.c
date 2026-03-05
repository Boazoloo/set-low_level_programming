#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j]; j++)
			_putchar(alphabet[j]); /* first _putchar */

		_putchar('\n'); /* second _putchar */
	}
}

