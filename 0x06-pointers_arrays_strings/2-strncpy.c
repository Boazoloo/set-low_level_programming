#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* fill remaining space with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

