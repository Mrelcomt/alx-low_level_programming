#include <stdio.h>
/**
 * fibonacci - prints the sum of the even
 * valued terms
 * @n: the number which not excede
 * main - call function fibonacci
 * Return: always 0
 *
 */
void fibonacci(int n)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > n)
			break;
		if ((fibsum % 2) == 0)
			tot_sum += fibsum;
		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);
}
