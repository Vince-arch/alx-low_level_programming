#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the output of the if else statement
 * Return: 0 shows success
 */

int main(void)

{

	int n;
	int d:

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	d = n%10;

	if (d == 0)
	printf("Last digit of %d is %d and is 0\n", n, d);
	
	else if (d >= 6)
	printf("Last digit of %d  is %d and is greater than 5\n", n, d);
	
	else 
	print("Last digit of %d is %d and is less than 6 and not 0\n", n, d);

	return (0);

}
