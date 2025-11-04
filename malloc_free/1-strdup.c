#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string into new memory
 * @str: string to duplicate
 * Return: pointer to new string, or NULL
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';

return (dup);
}
