#include "main.h"

/**
 * leet - encodes a string into leetspeek.
 *
 * @s: pointer to input string.
 *
 * Return: Returns pointer to leetspeek string.
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711"

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (s[i] == subs[j])
				s[i] = le[j / 2];
	}
	return (s);
}
