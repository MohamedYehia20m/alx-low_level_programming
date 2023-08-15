/**
 * _islower - check the character case
 * @c: ascii code of character to be checked
 *
 * Description: checks the case of character using ascii code
 * Return: 0 on uppercase , 1 otherwise
 */

#include <unistd.h>
#include "main.h"

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
