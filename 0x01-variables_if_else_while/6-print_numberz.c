#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 10;

	while (a < b)
	{
	putchar(a + '0');
	a++;
	}
	putchar('\n');

	return (0);
}
