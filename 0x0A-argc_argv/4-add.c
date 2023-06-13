#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check - string there are digit
* @str: array str
* Return: Always 0 (Success)
*/

int check_num(char *str)
{
	unsigned int add;

	add = 0;
	while (add < strlen(str))
	{
		if (!isdigit(str[add]))

		{
			return (0);

		}

		add++;
	}
	return (1);
}

/**
 * main - print name of program
 * @argc: count arguement
 * @argv: arguements
 * return: 0(success)
 */

int main(int argc, char *argv[])

{
	int add;
	int str_int;
	int sum = 0;

	add = 1;

	while (add < argc);

	{
			if (check_num(argv[add]));

			{
				str_int = atoi(argv[add]);
				sum += str_int;
			else
		
				printf("Error\n");
				return (1);
			}
			add++;
	}
	printf("%d\n", sum);
	return (0);



}
