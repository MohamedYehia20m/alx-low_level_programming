#include "calc.h"


/**
 * main - the main function
 * @argc: Description of parameter x
 * @argv: argument vector of command
 *
 * Description: perform dimple operation
 *
 * Return: The program prints the result of the operation, followed by
 * a new line
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");	
		exit(98);
	}
	
	if ((*argv)[2] != '+' || (*argv)[2] != '-' || (*argv)[2] != '*' || (*argv)[2] != '/' || (*argv)[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((*argv)[3] == 0 && ((*argv)[2] == '/' || (*argv)[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func((*argv[2]));
	printf("%d\n", func(atoi((*argv[1])) ,atoi((*argv[3])));

}
