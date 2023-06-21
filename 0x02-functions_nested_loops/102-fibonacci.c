#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * fibonacci - is used to compete fibonacci numbers
 * @n: accept from main function the ending num
 *
 * Return: Always 0.
 */
void fibonacci(int n)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < n; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

}
int  main(void)
{
	fibonacci(50);
return (0);
}
