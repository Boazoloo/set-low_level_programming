#include "main.h"

/**
 * main - prints all arguments it receives, one per line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i, j;

    for (i = 0; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
            _putchar(argv[i][j]);
        _putchar('\n');
    }

    return (0);
}

