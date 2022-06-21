#include <stdio.h>
#include "main.h"

/**
* print_last_digit - Print last digit
* @n: value
*
* Return: last digit
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = (-(last));
	}
		_putchar(last + '0');
	return (last);
}
