#include <stdio.h>

/**
 * main - Entry poin
 * Description - alphabet in reverse using putchar()
 * Return: 0 (Success)
 */

int main(void)
{
	char rev

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
