#include <stdio.h>

/**
 * main - Entry point
 *
 * ReturnAlways0 Success
 */

int main(void)

{

	int i;
	int j;	

	for (i = 48; i <= 57; j++)

	{
		for (j = 48; j <= 53; j++)
		{
			if (j > i)
			{
			putchar(i);
			putchar(j);
			if (i != 56)

			{
				putchar(',');
				putchar('');
			}
			}

		}

	}
	putchar('\n');
	return (0);

}
