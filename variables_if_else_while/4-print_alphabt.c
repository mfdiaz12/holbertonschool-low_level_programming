#include <stdio.h>

/**
* main - alphabet
*
* Return: 0
*/

int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
	if (alp == 'q' || alp == 'e')
	continue;
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
