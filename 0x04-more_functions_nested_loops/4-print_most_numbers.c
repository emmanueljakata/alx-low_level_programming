#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * Do not print 2 and 4
 * Return: 0
 */
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		if (n == 2 || n == 4)
			continue

			_putchar(i + '0');
	}
	_putchar('\n');
}
