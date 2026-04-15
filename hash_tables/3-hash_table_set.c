#include "hash_tables.h"
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
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = malloc(strlen(value) + 1);
	if (value_copy == NULL)
		return (0);
	strcpy(value_copy, value);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_copy;
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_copy);
		return (0);
	}

	node->key = (char *)key;
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
