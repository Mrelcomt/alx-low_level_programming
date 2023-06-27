#include "main.h"
/**
 * print_array - prints the array value
 * @a: array pass from main
 * @n: numbers array inclued
 * Return: there is no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n-1)
			printf("%d",a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}

