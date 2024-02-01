
#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int l;
	int m;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[l] = src[m];
	l++;
	m++;
	}
	dest[l] = '\0';

	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[y] = src[z];
	y++;
	z++;
	}
	dest[y] = '\0';

	return (dest);
}

