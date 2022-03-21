#include "main.h"


/**
 * print_rev - prints string in reverse followed by new line
 * @s: string to be reversed
 * Return- void
 */
void print_rev(char *s)
{
int i;

for (i = _strlen(s); i >= 0; i--)
{
_puts(s);
}
_puts('\n');
}
