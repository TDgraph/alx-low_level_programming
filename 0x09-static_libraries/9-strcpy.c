#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD
	int p = 0;
	int x = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for ( ; x < p ; x++)
	{
		dest[x] = src[x];
	}
	dest[p] = '\0';
	return (dest);
}

=======
	int g = 0;
	int h = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for ( ; h < g ; h++)
	{
		dest[h] = src[h];
	}
	dest[g] = '\0';
	return (dest);
}
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
