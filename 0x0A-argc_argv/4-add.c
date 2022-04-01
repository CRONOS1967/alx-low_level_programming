#include "main.h"

/**
 * main - prints result follwed by new line
 * @argc: Number of args
 * @argv: argumnets
 * Return: 1 if there is an error otherwise return 0
*/
int main(int argc, char *argv[])
{
int i, sum;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (!(atoi(argv[i])))
{
_putchar('Error');
return (1);
}
sum += atoi(argv[i]);
}
_putchar(sum);
}
else
{
_putchar('Error');
return (1);
}
return (0);
}
