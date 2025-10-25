#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: input string
 * Return: integer value
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int result = 0;
int found = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
if (result > (unsigned int)((INT_MAX - (s[i] - '0')) / 10))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + (s[i] - '0');
found = 1;
}
else if (found)
{
break;
}
i++;
}

if (sign == -1)
return (-((int)result));
return ((int)result);
}
