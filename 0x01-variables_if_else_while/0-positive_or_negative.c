#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("$d is positive");

	else;
       	printf("$d is negative");

	/* your code goes there */
	return (0);
}
