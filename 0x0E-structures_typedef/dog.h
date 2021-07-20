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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int main(void);

#endif /* DOG_H */
