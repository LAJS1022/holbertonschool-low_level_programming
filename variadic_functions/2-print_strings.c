#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings separated by a string
 * @separator: string to print between strings
 * @n: number of strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *s;

va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
if (s == 0)
printf("(nil)");
else
printf("%s", s);

if (separator != 0 && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
