#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to the destination string
 *
 * @src: the secod string
 *
 * @n: number of bytes to print
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
