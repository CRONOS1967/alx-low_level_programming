#include "main.h"

/**
 * main - Multiplyes two numbers
 * @argc: numbers of argument passed
 * @argv: arguments
 * Return: 1 if its has falure otherwise 0
*/
int main(int argc, char *argv[])
{
int i, mult;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mult *= atoi(argv[i]);
}
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
