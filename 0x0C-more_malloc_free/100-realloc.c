#include <stdlib.h>

/**
 * *_realloc - reallocate memory
 *
 * @ptr: pointer to old block of memory
 * @old_size: size of old memory blocks
 * @new_size: size of new memory blocks
 *
 * Return: pointer to new block; to old block if sizes match or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newmem;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newmem = realloc(ptr, new_size);

	return (newmem);
}
