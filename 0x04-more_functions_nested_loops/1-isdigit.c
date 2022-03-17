#include "main.h"

/**
 * _isdigit -checks for a digit
 * @c:a character to be eval
 * Return: 1 if its or 0 if itsn't
 * **/

int _isdigit(int c)
{
return ((c >= '0' || c <= '9') ? 1 : 0);
}
