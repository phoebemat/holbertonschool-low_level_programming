#include "holberton.h"

/**
 * _isupper - function to check for uppercase character
 * @c: integer variable for function
 * Return: Always 0.
 */

int _isupper(int c)
{

	if ((c > 64) && (c < 91))
	{
	return (1);
	}

	else
	{
	return (0);
	}


}
