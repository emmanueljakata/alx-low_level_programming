#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer to array
 * @c: char type
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
