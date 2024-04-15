#include"hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: the size of the array
 * @Return: the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * table->size);

	for(i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
