#include "main.h"

/**
 * _strcpy(char *dest, char *src)- copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination of cpoied string
 * @src: source of string
 * Return: String which was copied
 */
char *_strcpy(char *dest, char *src)
{
return (*dest = *src);
}