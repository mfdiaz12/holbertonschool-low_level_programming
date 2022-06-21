#include <stdio.h>
#include "main.h"

/**
* print_sign - Print sign
* @n: print sign
*
* Return: 1, 0, -. if n>0, n=0, n<0
*/

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
