#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: first field
 * @age: second field
 * @owner: third field
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - typedef struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*struct dog*/
