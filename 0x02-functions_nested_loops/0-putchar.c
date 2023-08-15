/**
*main - entry point
*
*Description : simple function to print string
*
*Return : Always 0 Success
*/
#include "main.h"

int main(void)
{
	char arr[10] =  "_putchar\n";

	for (int i = 0 ; i < 10 ; i++)
	{
		_putchar(arr[i]);
	}

	return (0);
}
