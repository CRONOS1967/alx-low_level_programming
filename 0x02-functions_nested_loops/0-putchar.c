#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
for (unsigned int i = 0; i <= sizeof(putchar); i++)
{
_putchar(putchar[i]);
}
_putchar(12142);
return (0);
}
