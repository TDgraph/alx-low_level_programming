#include <stdio.h>
#include<stdlib.h>

/**
 * str_concat - end of input added together for size
 * @t1: input to concat
 * @t2: 2nd input to concat
 * Return: concat of t1 and t2
 */

char *str_concat(char *t1, char *t2)

{
	char *concat;

	int a, it;

	if (t1 == NULL)

		t1 = "";

	if (t2 == NULL)

		t2 = "";

		a = it = 0;

	while (t1[a] != '\0')
		a++;

	while (t2[it] != '\0')
		it++;

	concat = malloc(sizeof(char) * (a + it + 1));

	if (concat == NULL)
		return (NULL);

	a = it = 0;

	while (t1[a] != '\0')
	{
		concat[a] = t1[a];
		a++;
	}
	while (t2[it] != '\0')

	{
		concat[a] = t2[it];
		a++, it++;
	}
	concat[a] = '\0'
	return (concat);
}
