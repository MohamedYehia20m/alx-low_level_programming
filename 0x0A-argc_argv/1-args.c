#include<stdlib.h>
#include<stdio.h>

/**
 * main - a program that prints  the number of arguments passed into it.
 * @argc: argc is the number of arguments being passed into your program from
 * the command line
 * @argv: rgv stands for "argument vector".argv is a one-dimensional array of
 * strings. Each string is one of the arguments that was passed to the
 * program.
 *
 * Description: a program that prints the number of arguments passed into it.
 *
 * Return: return 0 Success
 */

int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", (argc - 1));
	return (0);
}
