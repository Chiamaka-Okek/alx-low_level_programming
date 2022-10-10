#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function initializes a variable of type struct dog
 *
 * @d: variable of struct type dog
 * @name: pointer input string
 * @age: pointer input float
 * @owner: pointer input string
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
