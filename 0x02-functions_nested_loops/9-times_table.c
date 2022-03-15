#include "main.h"
/**
 * times_table - prints a multiplcation table
 * Returns: void
*/
void times_table(void)
{
int r, c, ans[10][10], i, j;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
ans[r][c] = r * c;
}
}
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; i++)
{
_putchar(ans[i][j]);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
