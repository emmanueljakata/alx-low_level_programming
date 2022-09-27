#include "main.h"

/**
 * _memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; n > 0 ; p++, n--)
	{
		dest[p] = src[p];
	}
	return (dest);
}
