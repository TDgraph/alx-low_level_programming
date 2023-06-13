#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *door;

	int a, b = 0;

	if (str == NULL)

		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	door = malloc(sizeof(char) * (a + 1));

	if (door == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		door[b] = str[b];
	return (door);
}
