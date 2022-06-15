#include <stdio.h>

/**
* main - alphabet
*
* Return: 0
*/

int main(void)
{
	char alp, ALP;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
	putchar(alp);
	}
	for (ALP = 'A' ; ALP <= 'Z' ; ALP++)
	{
	putchar(ALP);
	}
	putchar('\n');
	return (0);
}
