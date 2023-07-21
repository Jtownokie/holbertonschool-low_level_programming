#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 hash function
 * @str: String to pass
 *
 * Return: ul int that can be used as index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
