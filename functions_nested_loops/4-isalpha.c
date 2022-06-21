#include <stdio.h>
#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase or upercase
 * @c: The character to print 1
 *
 * Return: 1
*/

int _islower(int c)
{
	char print;
	char PRINT;

	for (print = 'a'; print <= 'z'; print++)
	{
		if (print == c)
			return (1);
	}
	for (PRINT = 'A'; PRINT <= 'Z'; PRINT++)
	{
		if (PRINT == c)
			return (1);
	}
	return (0);
}
