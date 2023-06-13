#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * _putchar - writes the c character to stdout
		
 * @c: character to print
		
 *
		
 * Return: On success 1.
		
 * On error, -1 is returned and errno is set accordingl.
		
 */
		
int _putchar(char c)
		
{
		
return (write(1, &c, 1));
}
