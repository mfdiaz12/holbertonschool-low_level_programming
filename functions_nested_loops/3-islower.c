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
	int print;

	for (print = 'a'; print <= 'z'; print++)
	{
		if (print == c)
			return (1);
	}
	return (0);
}
