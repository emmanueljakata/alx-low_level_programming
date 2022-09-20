#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed on screen
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if (*(str + count) != '"')
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
