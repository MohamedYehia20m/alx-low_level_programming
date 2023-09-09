#include<stdlib.h>
#include<stdio.h>

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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
