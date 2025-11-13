#include "variadic_functions.h"
#include <stdio.h>

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
char sep = 0;

va_start(args, format);
while (format && format[i])
{
if (sep)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
sep = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
sep = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
sep = 1;
break;
case 's':
s = va_arg(args, char *);
if (s == 0)
printf("(nil)");
else
printf("%s", s);
sep = 1;
break;
}
i++;
}
va_end(args);
printf("\n");
}
