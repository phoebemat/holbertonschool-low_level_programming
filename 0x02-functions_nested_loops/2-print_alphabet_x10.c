#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet ten times without printf
 *
 * Return: 0 (Always Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
	c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	d++;
	}
}
