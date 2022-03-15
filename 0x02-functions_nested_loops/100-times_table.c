#include "main.h"

/**
 * print_times - prints the n times table, starting with 0.
 * @n: number of row and col
 * Return: void
*/
void print_times_table(int n)
{
if (n >= 0 && n < 15)
{
 	int i = 0;
	int j = 0;
	int prod;

	while (i < n)
	{
		while (j < n)
		{
			prod = i * j;
			if (prod <= 9 && j != 0)
				_putchar(' ');
			if (prod > 9)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(prod + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
    
}
}
