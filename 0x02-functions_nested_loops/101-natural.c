#include <stdio.h>
/**
 * main - call a function the sum of 3 and
 * 5 multiplier b/n 0-1024
 *
 * mul_Sum - compute multiplier of 3 and 5
 * then add them together
 * @n: number the highest digit to compute
 * Return: always 0
 */
int mul_sum(int n)
{
int sum = 0;
int i = 0;

while (i < n)
	{
	if (i % 3 || i % 5)
	{
	sum = sum + i;
	}
	i++;
	}
return (sum);
}
int main(void)
{
	int result;

	result = mul_sum(1024);
	printf("%d", result);
	return (0);

}
