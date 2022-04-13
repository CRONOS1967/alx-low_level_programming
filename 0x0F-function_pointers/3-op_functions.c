#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: Sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - diffrence of two numbers
 * @a: first number
 * @b: second number
 * Return: diffrence of a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: division of a and b
*/
int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit (100);
}

/**
 * op_mod - remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of a and b after division
*/
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit (100);
}
