#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int a;

	while ((a > 47) && (a < 58))
	{
	_putchar(a + '0');
	a++;
	}

	_putchar('\n');
}
