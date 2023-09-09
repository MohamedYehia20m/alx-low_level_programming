/**
 * _islower - check the character case
 * @c: ascii code of character to be checked
 *
 * Description: checks the case of character using ascii code
 * Return: 1 on lowercase , 0 otherwise
 */

#include <unistd.h>
#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
