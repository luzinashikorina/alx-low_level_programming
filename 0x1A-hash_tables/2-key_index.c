#include "hash_tables.h"
/**
 * key_index - gives me the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair
 * should be stored in array pf hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);

}
