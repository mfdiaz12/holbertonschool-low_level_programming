#include "main.h"
/**
* print_alphabet - print alphabet
* Return: 0
*/
void print_alphabet_x10(void)
{

int n_repe;
char alp;

for (n_repe = '0'; n_repe <= '9'; n_repe++)
{
for (alp  = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
