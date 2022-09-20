#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string being measured
 * Return: length of a strin
 */

int _strlen(char *s)

{

	int dsp = 0
		
	while (*(s + dsp) != '\0')
	{
		dsp++;
	}

	return (dsp);
}
