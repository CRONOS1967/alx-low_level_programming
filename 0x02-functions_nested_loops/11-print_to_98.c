#include "main.h"

/**
 * print_to_98 - print n to 98
 * @n: numberto start
 * Return: void
*/
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n++;
		}
	else
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
			n--;
		}
}
