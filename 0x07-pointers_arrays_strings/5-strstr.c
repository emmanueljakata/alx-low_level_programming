#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: char pointer
 * @needle: char pointer
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	 int i;

	 if (*needle == 0)
		 return (haystack);

	 while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
			while (haystack[index] == needle[i]);
		}
		haystack++;	
	}
	return ('\0');
}
