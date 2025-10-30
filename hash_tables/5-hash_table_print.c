#include "hash_tables.h"
/**
 * hash_table_print -  prints a hash table.
 * @ht: the hash table
 * Return: Void.
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (first)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				first = 0;
			}
			else
			{
				printf(", '%s': '%s'", curr->key, curr->value);
			}
			curr = curr->next;
		}
	}
	printf("}\n");
}
