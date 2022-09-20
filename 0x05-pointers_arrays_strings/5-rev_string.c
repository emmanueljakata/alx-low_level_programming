#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed.
 * Return: void
 */

void print_rev(char *s)
{
	int revs = 0;

	while (*(s + revs) != '\0')
	{
		_putchar(*(s + revs));
		revs--;
	}
	_putchar('\n');
}
