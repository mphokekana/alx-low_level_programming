#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: a pointer to the new hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_array;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t)); /*create hash table*/
	if (new_table == NULL)
		return (NULL);

	new_array = malloc(sizeof(hash_node_t *) * size); /*create an array*/
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = NULL;

	new_table->array = new_array;
	new_table->size = size;

	return (new_table);
}
