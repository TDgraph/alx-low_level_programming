#include <stdio.h>
#include "main.h"

/**
 * main - print all arguements recieved
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0(success)
 */
int main(int argc, char *argv[])

{
	int k;

	for (k = 0; k < argc; k++)

	{

		printf("%s\n", argv[k]);
	}
}
