#include <stdio.h>
/**
 * main - Entry point
 * Prints all possible different combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
for (c = 0; c <= 9; c++)
{
for (d = 1; d <= 9; d++)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(c + '0');
putchar(d + '0');
if (a != 9 || b != 9 || c != 9 || d != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
