
#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - copies a string into new memory
 * @str: string to copy
 *
 * Return: pointer to the copy, or NULL
 */
static char *copy_string(char *str)
{
	char *copy;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc((i + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: pointer to the new dog, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = copy_string(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = copy_string(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

