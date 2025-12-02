#include "hash_tables.h"
/**
 * hash_table_get - retrieves value by key
 * @ht: hash table
 * @key: key string
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[idx];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp = tmp->next;
}
return (NULL);
}
