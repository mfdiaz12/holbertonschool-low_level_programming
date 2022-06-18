#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print fron a to z in lowercase 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int times;

	for (times = '0'; times <= '9'; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
		_putchar('\n');
}
