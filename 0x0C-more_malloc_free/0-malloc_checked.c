#include <stdlib.h>

/**
 * malloc_checked - allocate blocks of memory
 *
 * @b: size of memory to be allocated
 *
 * Return: void pointer on success and 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}
