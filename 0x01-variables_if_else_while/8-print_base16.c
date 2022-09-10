#include <stdio.h>

/**
 * main - Entry point
 * Description - base sixteen hexadecimal
 * Return: 0 (Success)
 */

int main(void)
{
	char hex;

	for (hex = 0; hex <= 9; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
