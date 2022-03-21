#include "main.h"

/**
 * puts_half-prints half of a string, follwed by new line
 * @str: string to be disected
 * Return: Void
 */
void puts_half(char *str)
{
int i;

for (i = 0; i <= (_strlen(str) / 2); i++)
{
_putchar(*str);
}
_putchar('\n');
}
