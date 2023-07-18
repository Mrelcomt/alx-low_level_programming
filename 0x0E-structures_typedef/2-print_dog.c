#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog structure content
 * @d: passwed struct to print
 * Return: no return
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
