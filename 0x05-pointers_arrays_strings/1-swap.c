#incluede "main.h"
/**
 * swap_int - it swap value of two intiger
 * @a: first number
 * @b: second number
 * Return: there is not return
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;


	*a = *b;
	*b = swap;

}
