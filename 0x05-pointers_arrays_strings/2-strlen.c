#include "main.h"

/**
 * _strlen - returns the length
 * @s: char type pointer
 * Return: length
 */

int _strlen(char *s)

{

	int c;

	for (c = 0; s[c] != '\0'; c++)

		;

	return (c);

}
