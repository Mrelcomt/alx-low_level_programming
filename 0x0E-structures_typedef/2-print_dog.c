#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog structure content
 * @d: passwed struct to print
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: ");
	d->name == NULL ? printf("nill\n") : printf("%s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner:");
       	d->owner == NULL ? printf("nill\n") : printf("%s\n", d->owner);
	}
}
