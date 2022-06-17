#include "main.h"

/**
 * _isalpha - check alphabet character
 * @c: check
 * Return: 0
 */

int _isalpha(int c)
{
char ref;
char REF;
for (ref = 'a'; ref <= 'z'; ref++)
{
if (c == ref)
return (1);
}
for (REF = 'A'; REF <= 'Z'; REF++)
{
if (c == REF)
return (1);
}
return (0);
}
