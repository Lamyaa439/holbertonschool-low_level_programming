#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: is the key
 * @size: the size of hash table
 *
 * Return: index at which the key/value pair should be
 * stored in the array of the hash table
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long sum = 0;
	int i;

	for (i = 0; key[i] != '\0'; i++)
	{
		sum += key[i];
	}
	return (sum % size);
}
