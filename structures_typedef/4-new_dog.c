#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len1, len2;

if (name == 0 || owner == 0)
return (0);

d = malloc(sizeof(dog_t));
if (d == 0)
return (0);

len1 = _strlen(name);
len2 = _strlen(owner);

d->name = malloc((len1 + 1) * sizeof(char));
if (d->name == 0)
{
free(d);
return (0);
}
d->owner = malloc((len2 + 1) * sizeof(char));
if (d->owner == 0)
{
free(d->name);
free(d);
return (0);
}

_strcpy(d->name, name);
_strcpy(d->owner, owner);
d->age = age;

return (d);
}
