#include "hash_tables.h"
/**
 *hash_table_get - To retrieve function associated with key
 *@ht: pointer to hash table
 *@key: key to retrieve value
 *Return: value of NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *bucket;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

