#include <stdio.h>

/**
 * main - Entry point
 * Description - alphabrt ecluding e and q
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'e' || alph == 'q')
			continue;
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
