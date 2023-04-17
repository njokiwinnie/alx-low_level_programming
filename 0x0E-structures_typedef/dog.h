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
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s)

#endif /*DOG_H*/
