#include "main.h"
#include <string.h>

/**
 * _strcat - appends src string to dest string
 *
 * @dest: string to append by src
 *
 * @src: string to append to dest
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;	
	}
	return (dest);
}
