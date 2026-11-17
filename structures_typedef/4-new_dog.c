#include <stdlib.h>
#include "dog.h"

/**
 * copy_str - makes a copy of a string in newly allocated memory
 * @s: the string to copy
 *
 * Return: a pointer to the copy, or NULL if malloc fails.
 */
char *copy_str(char *s)
{
	char *c;
	int len, i;

	len = 0;
	while (s[len] != '\0')
		len++;
	c = malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		c[i] = s[i];
	return (c);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: a pointer to the new dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = copy_str(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = copy_str(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
