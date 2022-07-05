#include "main.h"
/**
*print alphabet - main
* function that prints alphabet in lowercase
*/
void print_alphabet(void)
/**
 * print alphabet in lowercase
 */
{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
