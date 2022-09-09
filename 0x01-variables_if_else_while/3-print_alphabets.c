#include <stdio.h>

/**
 * main - Entry point
 * Description - Alphabet in lowercase then uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n')
	return (0);
}
