#ifndef DOG_H_
#define DOG_H_

void _puts(char *str);

/**
 * struct dog - create a struct for type dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: create a struct for type dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * struct dog_t - create a struct for type dog_t
 * @name: dog_t name
 * @age: dog_t age
 * @owner: dog_t owner
 *
 * Description: create a struct for type dog
 */

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
