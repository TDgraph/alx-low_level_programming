#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int p;

	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
=======
	int d;

	d = 0;
	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
	}

	return (dest);
}
<<<<<<< HEAD

=======
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
