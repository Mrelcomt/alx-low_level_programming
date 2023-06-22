#include <stdio.h>
/**
 * mul_sum - compeet the sum of 3 and 5 multiplier
 * @n: limit of computation
 * Description: this task is
 * Return: always 0
 */
int mul_sum(int n)
{
	unsigned long int sum3, sum5, sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < n; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	return (sum);
}
/**
 * main - this ti the main
 * Description: this main used to call function
 * Return: always 0
 */
int main(void)
{
	int result;

	result = mul_sum(1024);
	printf("%d", result);
	printf("\n");
	return (0);
}
