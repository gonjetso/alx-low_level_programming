#ifndef DOG_H
#define DOG_H

/**
 * dog_t - function
 */
typedef struct dog dog_t;

/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
