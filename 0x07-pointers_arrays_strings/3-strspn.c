#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: char pointer
 * @accept: prefix to be measured
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count1, count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				break;
			}
		}
		if (!(accept[count2]))
		{
			break;
		}
	}
	return (count1);
}
