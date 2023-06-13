#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
=======
	int t = 0;

	for (; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (&s[t]);
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
	}
	return (0);
}

