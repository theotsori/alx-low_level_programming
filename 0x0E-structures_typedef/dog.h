#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defining popppy
 * @name: char var
 * @age: float var
 * @owner: whose dog?
 *
 * Return: 0
 *
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
int str_len(char *s);
char *str_cpy(char *dest, char *src);

void free_dog(dog_t *d);

#endif /* _DOG_H_ */
