#include <stdio.h>
/**
 * fizz_buzz - print fizz buzz on multiplier of 3 and 5
 * Return: there is no return
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
			printf("%d", i);
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i > 1)
			printf(" %d", i);
	}
	printf("\n");

}
/**
 * main - call funcuiton fizz_buzz
 * Return: always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

