#include "main.h"
/**
<<<<<<< HEAD
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to change
 *
 * Return: changed array with the value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
=======
 * _memset - fill a block of memory with specific value
 * @s: starting address of memory to fill
 * @b: the required value
 * @n: number of bytes to change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
>>>>>>> 6d99d6fcb6ce6a864ddccf356d38fc885506420a
		n--;
	}
	return (s);
}

