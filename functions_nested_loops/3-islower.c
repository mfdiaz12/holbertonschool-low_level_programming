#include "main.h"

/**
 * _islower - c be cheked
 *@c: The character to print
 * Return: 0
 */

int _islower(int c)
{
char ref;
for (ref = 'a'; ref <= 'z'; ref++)
{
if (c == ref)
return (1);
}
return (0);
}
