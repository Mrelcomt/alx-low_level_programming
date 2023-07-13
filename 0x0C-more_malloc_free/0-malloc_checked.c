#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check available memory
 * @b: required memory size
 * Return: exit 98 or required memory
 */
void *malloc_checked(unsigned int b)
{
	void *req_mem;

	req_mem = malloc(b);
	if (req_mem == NULL)
		exit(98);
	return (req_mem);
}
