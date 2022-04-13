#include "3-calc.h"

/**
 * main - main file
 * @argc: number of lines arguments
 * @argv: array of elements
 * Return: 0
 */
int main(int argc, char const *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
return (0);
}
