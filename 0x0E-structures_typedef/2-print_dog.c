#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct
 *
 *@d: pointer to the variable of type struct dog
 *
 * Return: NUll if it fails else return struct
 */
void print_dog(struct dog *d)
{
	while (*d)
	{
		if (d == NULL)
		{
			return;
		}
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->owner == NULL)
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
	}
}