/**
*main - entry point
*Decription:Function to output a string
*Return:Always 0  Success
*/

#include "main.h"

int main(void)
{
	char arr[10] =  "_putchar\n";
	int i = 0;

	while (arr[i] != '\0')
	{
		_putchar(arr[i++]);
	}

	return (0);
}
