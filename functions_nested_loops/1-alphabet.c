#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print fron a to z in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		_putchar('\n');
}
