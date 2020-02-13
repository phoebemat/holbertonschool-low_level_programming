#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int a;
	int b;

	a = 0;
	b = 10;

	while (a < b)
	{
	_putchar(a + '0');
	a++;
	}
	_putchar('\n');
}
