#include "main.h"
/**
<<<<<<< HEAD
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
=======
 *_memcpy - copies memory area
 *@dest: memory where it is stored
 *@src: memory where it is copied
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
<<<<<<< HEAD
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
=======
	int p = 0;
	int o = n;

	for (; p < o; p++)
	{
		dest[p] = src[p];
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
		n--;
	}
	return (dest);
}

