#include "main.h"

/**
 *  puts2 - prints every other char of a string
 *  @str: string pass string
 *  Return: void
 */

void puts2(char *str)

{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
