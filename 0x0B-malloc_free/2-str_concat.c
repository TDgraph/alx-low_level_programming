#include <stdio.h>
#include<stdlib.h>

/**
 * str_concat - end of input added together for size
 * @s1: input to concat
 * @s2: 2nd input to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *concat;

	int a, it;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

		a = it = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[it] != '\0')
		it++;

	concat = malloc(sizeof(char) * (a + it + 1));

	if (concat == NULL)
		return (NULL);

	a = it = 0;

	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}
	while (s2[it] != '\0')

	{
		concat[a] = s2[it];
		a++, it++;
	}
	concat[a] = '\0'
	return (concat);
}
