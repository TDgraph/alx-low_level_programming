#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	int r;

	r = 0;
	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
	r++;
	}
	return (0);
}

=======
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
