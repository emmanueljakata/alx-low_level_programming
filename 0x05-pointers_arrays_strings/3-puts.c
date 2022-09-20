#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed on screen
 * Return: void
 */

void _puts(char *str)

{
	int prt = 0;

	while (*(str + prt) != '\0')
	{
		_putchar(*(str + prt));
			prt++;
	}
	_putchar('\n');
}
