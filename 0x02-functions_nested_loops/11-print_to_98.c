#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print n to 98
 * @n: numberto start
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%i, ", n);
		}
	}
}
