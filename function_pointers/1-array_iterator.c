#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer to apply
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == 0 || action == 0)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
