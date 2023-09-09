#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main -  a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argc is the number of arguments being passed into your program from
 * the command line
 * @argv: rgv stands for "argument vector".argv is a one-dimensional array of
 * strings. Each string is one of the arguments that was passed to the
 * program.
 *
 * Description:  a program that prints the minimum number of coins to make
 * change for an amount of money.
 *
 * Return: return 0 Success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	while (cents >= 25)
	{
		cents -= 25;
		sum++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		sum++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		sum++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		sum++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
