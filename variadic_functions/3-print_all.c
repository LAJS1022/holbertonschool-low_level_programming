#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *s;
char *sep = "";

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
va_end(args);
printf("\n");
}
