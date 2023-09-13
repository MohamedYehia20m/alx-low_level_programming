#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to be printed
 * @f: pointer to function
 *
 * Description: calling a specific print function using its pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
