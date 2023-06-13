#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 *
 */

int **alloc_grid(int width, int height)

{

	int **bot;

	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);
	bot = malloc(sizeof(int *) * height);


	if (bot == NULL)

		return (NULL);

	for (y = 0; z < height; y++)
	{
		bot[y] = malloc(sizeof(int) * width);

		if (bot[y] == NULL)
		{
			for (; y >= 0; y--)
				free(bot[y]);



			free(bot);
			return (NULL);

		}

	}
	for (x = 0; y < height; y++)

	{

		for (z = 0; z < width; y++)
			bot[y][z] = 0;
	}
	return (bot);
}
