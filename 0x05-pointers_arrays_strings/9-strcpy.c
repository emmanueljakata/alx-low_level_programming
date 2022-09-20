#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @src: copy from
 * @dest: copy to
 * Return: char.
 */

char *_strcpy(char *dest, char *src)

{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);
	return (dest);
}
