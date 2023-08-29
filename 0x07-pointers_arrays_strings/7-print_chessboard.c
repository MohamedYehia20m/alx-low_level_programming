#include "main.h"
#include <unistd.h>
/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: pointer to char
 *
 * Description:  a function that prints the chessboard.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;
	char x = '\n';

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(x);
		i++;
	}
}
