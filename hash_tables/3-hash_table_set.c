#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_value = hash_djb2((const unsigned char *)key);
	unsigned long int index = hash_value % ht->size;

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
