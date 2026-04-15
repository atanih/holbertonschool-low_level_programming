#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key, string. Key cannot be an empty string
 * @value: The value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *value_copy, *key_copy;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = malloc(strlen(value) + 1);
			if (!node->value)
				return (0);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	key_copy = malloc(strlen(key) + 1);
	value_copy = malloc(strlen(value) + 1);

	if (!node || !key_copy || !value_copy)
	{
		free(node);
		free(key_copy);
		free(value_copy);
		return (0);
	}

	strcpy(key_copy, key);
	strcpy(value_copy, value);
	node->key = key_copy;
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
