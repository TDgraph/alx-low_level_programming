#include "main.h"
/**
 * _memset - fill a block of memory with specific value
 * @s: starting address of memory to fill
 * @b: the required value
 * @n: number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

