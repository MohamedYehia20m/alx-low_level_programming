#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argc is the number of arguments being passed into your program from
 * the command line
 * @argv: rgv stands for "argument vector".argv is a one-dimensional array of
 * strings. Each string is one of the arguments that was passed to the
 * program.
 *
 * Description: a program that prints its name, followed by a new line.
 *
 * Return: return 0 Success
 */
int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s\n", argv[0]);
	return (0);
}
