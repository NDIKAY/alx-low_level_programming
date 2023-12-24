#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure
 *@name: dog name
 *@age: dog age
 *@owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *struct dog - A structure
 *dog_t - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dst, char *src);

#endif
