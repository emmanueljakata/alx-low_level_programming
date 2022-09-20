#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed on screen
 * Return: void
 */

void _puts(char *str)
{
	int pr = 0;

	while (*(str + pr) != '\0')
	{
		_putchar(*(str + pr));
		pr++;
	}
	_putchar('\n');
}
