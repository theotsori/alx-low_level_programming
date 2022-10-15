#include <stdlib.h>
#include "dog.h"

/**
 * str_len - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *str_cpy - copy the string pointed to
 * @dest: pointer to string char
 * @src: string to copy
 *
 * Return: 0
 */
char *str_cpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new_dog 1 else 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = str_len(name);
	len2 = str_len(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
