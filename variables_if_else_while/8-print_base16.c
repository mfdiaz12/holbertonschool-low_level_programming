#include <stdio.h>

/**
* main - alphabet
*
* Return: 0
*/

int main(void)
{
	char alp, n;

	for (n = '0' ; n <= '9' ; n++)
	{
	putchar(n);
	}
	for (alp = 'a' ; alp <= 'f' ; alp++)
	{
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
