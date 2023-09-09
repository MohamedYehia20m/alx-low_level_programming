#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * is_digit - checks if character is numeric or not
 * @c: character to be tested
 *
 * Description: checks if character is numeric or not
 *
 * Return: 0 for non-numeric , 1 for numeric.
 */

int is_digit(char *c)
{
	int j = 0;

	while (*(c + j))
	{
		if (isdigit(*(c + j)) == 0)
			return (0);
		j++;
	}
	return (1);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: argc is the number of arguments being passed into your program from
 * the command line
 * @argv: rgv stands for "argument vector".argv is a one-dimensional array of
 * strings. Each string is one of the arguments that was passed to the
 * program.
 *
 * Description: a program that multiplies two numbers.
 *
 * Return: return 0 Success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (is_digit((argv[i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", (sum));
	return (0);
}
