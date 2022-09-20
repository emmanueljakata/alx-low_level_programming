#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n of elements of array
 * @a: array to display from
 * @n: number of elements to display
 */

void print_array(int *a, int n)

{
	int i = 0;

	while (i < n)
	{

		if (i == n - 1)
		printf("%d", *(a + i));

		else
		printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
