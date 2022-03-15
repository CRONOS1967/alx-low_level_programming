#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
for (int i = 0; i < 8; i++)
{
_putchar(putchar[i]);
}
_putchar('/n');
return (0);
}
