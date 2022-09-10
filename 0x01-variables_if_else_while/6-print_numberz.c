#include <stdio.h>

/**
 * main - Entry point
 * Decription - Base ten digits using putchar()
 * return: 0 (success)
 */

int main(void)
{
	int digit;
	for (digit = 48; digit <= 57; digit++)
		putchar((char) digit);
	putchar('\n');
	return (0);
}
