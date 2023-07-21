#include "hash_tables.h"

/**
 * key_index - Function that returns index of *key
 * @key: key to pass
 * @size: size of table
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
