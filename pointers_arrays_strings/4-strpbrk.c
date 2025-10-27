#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: accepted characters
 * Return: pointer to matching byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (0);
}
