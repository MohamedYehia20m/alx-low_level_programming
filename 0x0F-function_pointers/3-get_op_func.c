#include "calc.h"

/**
 * get_op_func - function that return pointer to function
 * @s: character that indicate the mathematical operator
 *
 * Description: function that return pointer to function to execute simple 
 * mathematical operation
 *
 * Return: pointer to function that returns integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (s == ops[i].op)
			return (*ops[i].f);
		i++;
	}
	return (NULL);
}
