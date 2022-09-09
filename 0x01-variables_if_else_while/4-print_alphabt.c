#include <stdio.h>

/**
 * main - Entry point
 * Description - alphabrt ecluding e and q
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph != 'e'; alph != 'q'; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
