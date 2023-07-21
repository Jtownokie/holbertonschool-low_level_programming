#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 hash function
 * @str: String to pass
 *
 * Return: ul int that can be used as index
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
