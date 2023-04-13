#include <stdlib.h>

/**
 * *array_range - allocate memory for an array
 * assign values starting from min to max to array of range max - min
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array or null on failure
 */

int *array_range(int min, int max)
{
	int range = (max - min) + 1;
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * range);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
