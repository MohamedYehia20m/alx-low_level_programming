#include <unistd.h>
#include "main.h"

/**
*intial short description: check the character case
*Description:  _islower() checks for lowercase character
*@c represent the ascii code for character to check
* Return: on uppercase 0 , 1 otherwise
*
*/

int _islower(int c)
{
	if (c >= 65 && c<= 90)
		return (0);
	else
		return (1);
}
