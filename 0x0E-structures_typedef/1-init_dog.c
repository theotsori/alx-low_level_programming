#include "dog.h"

/**
 * init_dog - initializing struct dog
 * @d: pointer var
 * @name: char var
 * @age: float char
 * @owner:char var
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
