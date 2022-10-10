#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @print_dog - prints a struct
 * 
 * @d: pointer to the variable of type struct dog
 *
 * Return: NUll if it fails else return struct
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
