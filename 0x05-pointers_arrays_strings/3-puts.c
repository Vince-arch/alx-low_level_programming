#include "main.h"

/**
 * _puts - prints to stdout
 * @str: char type string
 * Use _putchar
 */

void _puts(char *str)

{

	int i;

	for (i = 0; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
