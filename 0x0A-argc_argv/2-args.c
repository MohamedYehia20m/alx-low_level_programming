#include<stdlib.h>
#include<stdio.h>

/**
 * main - a program that prints all argumnet it recieves
 * @argc: argc is the number of arguments being passed into your program from
 * the command line
 * @argv: rgv stands for "argument vector".argv is a one-dimensional array of
 * strings. Each string is one of the arguments that was passed to the
 * program.
 *
 * Description: a program that prints all arguments it recieves
 *
 * Return: return 0 Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
