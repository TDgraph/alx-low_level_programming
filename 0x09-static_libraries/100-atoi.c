#include "main.h"

/**
<<<<<<< HEAD
 * _atoi - converts string to integer.
=======
 * _atoi - convert a string to integer.
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
<<<<<<< HEAD
	int goal = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			goal *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= goal;
	return (res);
}

=======
	int sign = 1, a = 0;
	unsigned int res = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sign *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		res = (res * 10) + (s[a] - '0');
		a++;
	}
	res *= sign;
	return (res);
}
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
