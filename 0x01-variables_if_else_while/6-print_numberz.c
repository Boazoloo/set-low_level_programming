#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *         without using a char variable
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48); /* ASCII '0' = 48 */
	putchar('\n');

	return (0);
}

