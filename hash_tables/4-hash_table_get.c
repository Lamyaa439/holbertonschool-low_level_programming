#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key to looking for
 *
 * Return: Returns the value associated with the element
 * or NULL if key could not be found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	curr = ht->array[index];

	while (curr != NULL)
	{
		if (curr->key != NULL && strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
