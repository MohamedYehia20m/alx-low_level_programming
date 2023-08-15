/**
 * _isalpha - check whather the character is alphabetic
 * @c: ascii code of character to be checked
 *
 * Description: checks whether the character is alphabetic using ascii code
 * Return: 1 for letters , 0 otherwise
 */

#include <unistd.h>
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
