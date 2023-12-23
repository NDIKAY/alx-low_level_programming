#include "hash_tables.h"
/**
 *key_index - function that give an index of a key
 *@key: key to hash
 *@size: size of a hash table
 *Return: Index of 'key'
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

