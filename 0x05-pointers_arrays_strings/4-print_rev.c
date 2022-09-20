#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed on screen
 * Return: void
 */

void print_rev(char *s)

{
	int revs;

	revs = 0;

	while (*(s + revs) != '\0')
	{
		revs++;
	}
	revs--;
	while (revs >= 0)
	{
		putchar(*(s + revs));
		revs--;
	}
	putchar('\n');
}
