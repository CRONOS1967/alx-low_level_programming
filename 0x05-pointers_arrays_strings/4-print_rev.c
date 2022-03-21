#include "main.h"


/**
 * print_rev - prints string in reverse followed by new line
 * @s: string to be reversed
 * Return- void
 */
void print_rev(char *s)
{
int c;

c = 0;
while (*s != '\0')
{
c++;
s++;
}
while (c>=0)
{
s--;
_putchar(*s);
c--;
}

_putchar('\n');
}
