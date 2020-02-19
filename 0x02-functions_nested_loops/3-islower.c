#include "holberton.h"

/**
* _islower -  determine if upper,lower, or num
* @c: char checked
* Return: 1 if yes
**/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
