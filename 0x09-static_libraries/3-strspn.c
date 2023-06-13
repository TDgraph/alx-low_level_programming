#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
<<<<<<< HEAD
 * Return: 0 for (Success)
=======
 * Return: Always 0 (Success)
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
<<<<<<< HEAD
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
=======
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*s == accept[e])
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
			{
				n++;
				break;
			}
<<<<<<< HEAD
			else if (accept[r + 1] == '\0')
=======
			else if (accept[e + 1] == '\0')
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
				return (n);
		}
		s++;
	}
	return (n);
}
<<<<<<< HEAD

=======
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
