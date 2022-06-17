#include "main.h"
/**
* print_alphabet_x10 - print alphabet x10
* Return: 0
*/
void print_alphabet_x10(void)
{
char alp;
int n_repe;
for (n_repe = 0; n_repe <= 9; n_repe++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar (alp);
}
_putchar ('\n');
}
}
