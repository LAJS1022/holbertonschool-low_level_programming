#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of a dog
 * @d: pointer to dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
if (d != 0)
{
free(d->name);
free(d->owner);
free(d);
}
}
