#include "holberton.h"

/**
 * more_numbers - print array of numbers 10 times
 *
 * Return: Always 0.
 */


void more_numbers(void)
{
	char c;
	int a = 0;

	while (a < 10)
	{
	c = 'a';
		while (c < 15)
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	a++
	}

}

