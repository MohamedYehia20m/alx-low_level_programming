#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <unistd.h>
#include <stddef.h>

/**
 * print_dog -  a function that prints a struct dog
 * @d: pointer to struct of type dog
 *
 * Description:  a function that prints a struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)\n");
	printf("Name: %s\n", d->name);
	if (d->age == 0.0)
		printf("(nil)\n");
	printf("Age: %f\n", d->age);
	if (d->name == NULL)
		printf("(nil)\n");
	printf("Owner: %s\n", d->owner);
}
