#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
* main - Entry point
*Return: Always 0 (Success)
*/

int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
	printf("%d is zero\n", rand());
	}
	else
		if (n > 0)
		{
		printf("%d is positive\n", rand());
		}
		else
			if (n < 0)
			{
			printf("%d is negative\n", rand());
			}
	return (0);

}
