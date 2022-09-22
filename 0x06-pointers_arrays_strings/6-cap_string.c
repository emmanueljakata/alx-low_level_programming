#include "main.h"

/**
 * cap_string - Changes all words of a string to uppercase
 *
 * @s: pointer to input string
 *
 * Return: Returns address of s
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	f (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
	i++;
	}
	return (s);
}
