#include <stdio.h>
#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase
 * @c: The character to print 1
 *
 * Return: 1
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
