#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	/* capitalize first character if it's a lowercase letter */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');

	while (s[i] != '\0')
	{
		int j = 0;

		/* check all separators */
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				/* capitalize next character if it's a lowercase letter */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - ('a' - 'A');
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

