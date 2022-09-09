#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Entry point
 *
 * Description - Asigning a random number to variable n its status
 *
 * Return: 0 (Success)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n>0){
					printf("is positive\n");
					}
					
					else if(n==0){
					printf("is zero\n");
					}

					else(n<0){
					printf("is negetive\n");
					}

					return (0);
}
