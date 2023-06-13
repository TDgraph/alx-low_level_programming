#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
<<<<<<< HEAD
	int o;

	while (*s)
	{
		for (o = 0; accept[o]; o++)
		{
		if (*s == accept[o])
=======
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
		if (*s == accept[c])
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
		return (s);
		}
	s++;
	}

return ('\0');
}
<<<<<<< HEAD

=======
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
