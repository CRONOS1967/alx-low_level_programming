#include "main.h"

/**
 * create_array - create array
 * @size: size
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ch;

if (size == 0)
{
return (NULL);
}
else
{
ch = malloc(sizeof(c) * size);
while (i < size)
{
ch[i] = c;
}
return (ch);
}
}
