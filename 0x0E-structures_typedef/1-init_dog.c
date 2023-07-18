#include "dog.h"
/**
 * init_dog - initialize dog struct
 * @d: pased struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: there is no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* member of structure*/
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;


}
