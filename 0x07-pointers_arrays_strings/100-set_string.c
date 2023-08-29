#include <unistd.h>
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to char
 * @to: pointer to pointer to char
 *
 * Description: a function that sets the value of a pointer to a char.
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
	write(1, *(s), 1);
}
