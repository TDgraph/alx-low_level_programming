#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
<<<<<<< HEAD
		char *t = haystack;
		char *p = needle;

		while (*t == *p && *p != '\0')
		{
			t++;
			p++;
		}

		if (*p == '\0')
=======
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
			return (haystack);
	}

	return (0);
}
<<<<<<< HEAD

=======
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
