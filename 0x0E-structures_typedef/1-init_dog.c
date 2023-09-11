#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d:pointer to structure of type dog
 * @name: dog name to be intialized
 * @age:dog age to be intialized
 * @owner:dog owner to be intialized
 *
 * Description: a function that initialize a variable of type struct dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
