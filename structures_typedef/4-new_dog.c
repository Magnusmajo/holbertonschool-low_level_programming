#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name: Pointer to name
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str;
	int i = 0, j = 0, k, l;

	if (name == NULL || owner == NULL)
		return (NULL);
	str = malloc(sizeof(dog_t));
	if (str == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	str->name = malloc((i + 1) * sizeof(char));
	if (str->name == NULL)
	{
		free(str);
		return (NULL);
	}
	str->age = age;
	str->owner = malloc((j + 1) * sizeof(char));
	if (str->owner == NULL)
	{
		free(str->name);
		free(str);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		str->name[k] = name[k];
	}
	for (l = 0; k <= j; l++)
	{
		str->owner[l] = owner[l];
	}
	return (str);
}
