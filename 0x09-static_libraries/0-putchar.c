#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
<<<<<<< HEAD
 * Return: if successfull, 1.
 * if error, -1 is returned, and errno is set appropriately.
=======
 * Return: On success 1.
 * On error, -1 is returned,and error no is set appropriately
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

