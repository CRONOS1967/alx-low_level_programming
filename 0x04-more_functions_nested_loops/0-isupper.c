#include "main.h"
/**
 *_isupper- checks for uppercase char
 *@c: a chracter to be eval
 *Return: 1 if its upper 0 if its't
 */
int _isupper(int c)
{
return ((c >= 'A' || c <= 'Z') ? 1 : 0);
}
