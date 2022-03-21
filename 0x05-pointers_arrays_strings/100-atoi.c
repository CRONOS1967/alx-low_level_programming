#include "main.h"

/**
 * _atoi-convert a string to an integer
 * @s: string to be converted
 * Return: int other wise 0
*/
int _atoi(char *s)
{
int res = 0;

int sign = 1;

int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; ++i)
{
res = res * 10 + s[i] - '0';
}
return (sign *res);
}
