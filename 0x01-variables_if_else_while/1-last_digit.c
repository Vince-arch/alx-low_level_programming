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

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n%10 == 0)
	printf("Last digit of %d", n "is" n%10 "and is 0\n");
	
	else if (n%10 > 5)
	printf("Last digit of %d", n "is" n%10 "and is greater than 5\n");
	
	else 
	print("Last digit of %d", n "is" n%10 "and is less than 5\n");

	return (0);

}
