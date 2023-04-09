#include <stdio.h>

void one(void) __attribute__ ((constructor));

/**
 * one - prints a sentence before the main
 * then execute the function
 */
void one(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

