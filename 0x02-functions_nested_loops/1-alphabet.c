#include "main.h"
/**
*print _alphabet - main
* function that prints alphabet in lowercase
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
