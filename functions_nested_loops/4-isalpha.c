#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Returns 1 if c is lowercase and upercase
 * @c: The character to print 1
 *
 * Return: 1
*/

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 91) && (c <= 97))
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
