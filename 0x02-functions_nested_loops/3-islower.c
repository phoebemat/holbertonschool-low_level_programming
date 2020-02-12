#include "holberton.h"

/**
* _islower -  determine if upper or lowercase
* @c: char checked
* Return: 1 if upper
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
