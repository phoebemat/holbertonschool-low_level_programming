#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	while (a < 101)
	{
	if (a % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz ");
	}
	else if ((a % 3 == 0) && (a % 5 == 0))
	{
		printf("FizzBuzz ");
	}
	printf("%d ", a);
	}
	return (0);
}
