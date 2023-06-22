#include <stdio.h>

/**
 * fibonacci - is used to compete fibonacci
 * @n: accept from main function the ending num
 * Description: fibonacci is used to add conscuite num
 *
 * Return: there is no returni
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
/**
 * main - check fibonacci
 * Description: main call the function
 * Return: always 0
 */
int  main(void)
{
	fibonacci(50);
return (0);
}
