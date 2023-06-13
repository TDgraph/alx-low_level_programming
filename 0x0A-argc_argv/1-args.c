#include <stdio.h>
#include "main.h"

/**
 * main - print passed arguments to the pragram
 * @argc: the number of arguements
 * @argv: the array of arguements
 * Return: 0(success)
 */

int main(int argc, char *argv[])

{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
