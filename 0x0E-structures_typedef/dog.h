#ifndef F_DOG
#define F_DOG

#include <stdlib.h>
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of the owner
*/
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
#endif
