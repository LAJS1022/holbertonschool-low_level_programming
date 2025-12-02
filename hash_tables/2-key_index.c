#include "hash_tables.h"
/**
 * key_index - gives index of a key
 * @key: key string
 * @size: size of the array
 * Return: index at which key/value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
