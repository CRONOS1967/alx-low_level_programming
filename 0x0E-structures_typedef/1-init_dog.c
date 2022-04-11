#include "dog.h"

/**
 * init_dog - initalzies the struct for dog
 * @d: sturcture
 * @name: params(name)
 * @age:params(age)
 * @owner:params(owner's name)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
