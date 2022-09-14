#include "main.h"

/**
 * main - Entry point
 * Description - print alphabet
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int u;

	for (u = 'a'; u <= 'z'; u++)
	{
		_putchar(u);
	}
	_putchar('\n');
}
