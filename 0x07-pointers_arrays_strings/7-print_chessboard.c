#include <unistd.h>
/**
 * print_chessboard -  a function that prints the chessboard.
 * @parameterx: Description of parameter x
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
	
	while(i < 8)
	{
		while(j < 8)
		{
			write(1,&a[i][j],1);
			j++;
		}
		write(1,&x,1);
		i++;
	}
}
