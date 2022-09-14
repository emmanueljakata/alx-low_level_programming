#include "main.h"

/**
 * print_alphabet_x10  -
 */

void print_alphabet_x10(void)
{
	int u;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);
		}
		_putchar('\n');
	}
}
