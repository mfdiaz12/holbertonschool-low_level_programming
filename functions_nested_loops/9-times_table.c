#include <stdio.h>
#include "main.h"

/**
* times_table - Print tables
* Return: 0
*/

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i  <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			m = i * j;
				if (m <= 9)
					_putchar(' ');
				else
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
		}
			_putchar('\n');
	}
}
