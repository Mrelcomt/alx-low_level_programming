#ifndef INV_TREE_H
#define INV_TREE_H
/**
 * struct dog - structure with different attribute
 * @name: name of the dog
 * @age: age of the dog
 * @owner: whose owne the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
