#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key string
 * @value: value string
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new, *tmp;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[idx];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
return (1);
}
tmp = tmp->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = strdup(value);
if (new->value == NULL)
{
free(new->key);
free(new);
return (0);
}
new->next = ht->array[idx];
ht->array[idx] = new;
return (1);
}
