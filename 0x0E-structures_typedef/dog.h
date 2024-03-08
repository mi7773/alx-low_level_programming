#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - draft
 * @name: draft
 * @age: draft
 * @owner: draft
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* MAIN_H */
