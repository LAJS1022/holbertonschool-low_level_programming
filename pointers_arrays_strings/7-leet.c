#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
char *a = "aAeEoOtTlL";
char *b = "4433007711";
int i = 0;
int j;

while (s[i] != '\0')
{
for (j = 0; j < 10; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
}
}
i++;
}
return (s);
}
