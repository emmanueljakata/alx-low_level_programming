#include "main.h"

/**
 * main - Entry point
 * Discription - print alphabet
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
