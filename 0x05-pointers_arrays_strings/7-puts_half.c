#include "holberton.h"

/**
 * puts_half - only print 2nd half of a string
 * @str: string to be halfed
 * Return: Always 0.
 */
void puts_half(char *str)
{

	int a;

	for (a = 0; str[a] != '\0'; a++)
		{
	/* empty for loop */
		}
	a++;

	for (a /= 2; str[a] != '\0'; a++)
		{
		_putchar(str[a]);
		}

	_putchar('\n');

}
