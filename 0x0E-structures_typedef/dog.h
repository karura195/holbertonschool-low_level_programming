#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Info about our dogs
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Name, age and owner of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
