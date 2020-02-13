#include "holberton.h"

/**
 * more_numbers - print array of numbers 10 times
 *
 * Return: Always 0.
 */


void more_numbers(void)
{
	int a;

	a = 0;

	while (a < 15)
		{
		_putchar(a + '0')
		a++;
		}
	_putchar('\n');
	_putchar(10);
}

