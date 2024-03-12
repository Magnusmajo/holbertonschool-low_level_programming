#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Variable type dog
 * @name: Entry char, name of the dog.
 * @age: Entry float, age of the dog.
 * @owner: Entry char, the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
