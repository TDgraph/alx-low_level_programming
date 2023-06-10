#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory where it is stored
 *@src: memory where it is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int o = n;

	for (; p < o; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

