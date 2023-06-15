#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of stored  values and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *east;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	east = malloc(sizeof(int) * size);

	if (east == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		east[i] = min++;

	return (east);
}
