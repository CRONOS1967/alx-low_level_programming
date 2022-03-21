#include "main.h"

/**
 * _puts- prints a strnig followed by a new line
 * @str:: a string to display
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_puts(*str);
str++;
}
_puts('\n');
}
