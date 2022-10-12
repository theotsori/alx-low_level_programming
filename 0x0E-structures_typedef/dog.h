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
struct dog
{
	char *name;
	float age;
	char *owner;
};

#ifdef _DOG_T_H_
#define _DOG_T_H_
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
