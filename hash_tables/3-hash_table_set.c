#include <stdlib.h>
#include <string.h>
#include “hash_tables.h”

/**

- hash_table_set - Adds an element to the hash table
- @ht: The hash table
- @key: The key
- @value: The value associated with the key
- 
- Return: 1 if it succeeded, 0 otherwise
  */
  int hash_table_set(hash_table_t *ht, const char *key, const char *value)
  {
  hash_node_t *new_node;
  hash_node_t *node;
  unsigned long int index;
  
  if (ht == NULL || key == NULL || *key == ‘\0’)
  return (0);
  
  index = key_index((const unsigned char *)key, ht->size);
  node = ht->array[index];
  
  while (node != NULL)
  {
  if (strcmp(node->key, key) == 0)
  {
  free(node->value);
  node->value = malloc(strlen(value) + 1);
  if (node->value == NULL)
  return (0);
  strcpy(node->value, value);
  return (1);
  }
  node = node->next;
  }
  
  new_node = malloc(sizeof(hash_node_t));
  if (new_node == NULL)
  return (0);
  
  new_node->key = malloc(strlen(key) + 1);
  if (new_node->key == NULL)
  {
  free(new_node);
  return (0);
  }
  strcpy(new_node->key, key);
  
  new_node->value = malloc(strlen(value) + 1);
  if (new_node->value == NULL)
  {
  free(new_node->key);
  free(new_node);
  return (0);
  }
  strcpy(new_node->value, value);
  
  new_node->next = ht->array[index];
  ht->array[index] = new_node;
  
  return (1);
  }
