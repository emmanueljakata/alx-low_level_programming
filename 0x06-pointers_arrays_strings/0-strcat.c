#include "main.h"
#include <string.h>

/**
 * _strcat - appends src string to dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];	
	}
	dest[i] = '\0';
	return (dest);
}
