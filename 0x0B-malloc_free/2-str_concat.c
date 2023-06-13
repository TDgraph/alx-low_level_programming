#include <stdio.h>
#include<stdlib.h>

/**
 * str_conct _ ends of input added together for size
 * @t1: input to concatinate
 * @t2: 2nd input to concatenate
 * Return: concat of t1 and t2
 */

char *str_conct(char *t1, char *t2)

{
	char *conct;

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

	conct = malloc(sizeof(char) * (a + it + 1));

	if (conct == NULL)
		return (NULL);

	a = it = 0;

	while (t1[a] != '\0')
	{
		conct[a] = t1[a];
		a++;
	}
	while (t2[it] != '\0')

	{
		conct[a] = t2[it];
		a++, it++;
	}
	conct[a] = '\0'
	return (conct);
}
