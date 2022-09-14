#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to be targeted
 * Return: returns 0
 */

int print_last_digit(int n)

{
	int l = n % 10;

	if (n < 0)
		l = -1;

	_putchar (l + '0');
	return (l);
}
