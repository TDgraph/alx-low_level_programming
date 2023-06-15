#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: number of bytes to allocate
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tem;

	tem = malloc(b);

	if (tem == NULL)
		exit(98);

	return (tem);
}
