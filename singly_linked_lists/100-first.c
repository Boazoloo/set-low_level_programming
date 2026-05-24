#include <stdio.h>

/**
 * first_message - prints a message before main is executed
 *
 * Return: void
 */
void __attribute__((constructor)) first_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

