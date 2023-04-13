#include <stdlib.h>

/**
 * *_calloc - allocate memory and initialize values to 0
 *
 * @nmemb: number of elements of size (size) to be allocated
 * @size: size of individual elements
 *
 * Return: pointer to allocated memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return ('\0');

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return ('\0');

	return (ptr);
}
