[2;2Rude "holberton.h"

/**
* print_alphabet_x10 - print array a-z ten times
* Return: 0 (Always success)
*/

void print_alphabet_x10(void)
{
	char ch;
	int x = 0;

	while (x < 11)
	{
	ch = 'a';
	while (ch <= 'z')
		{
		_putchar(ch);
		ch++;
		}
	_putchar('\n');
		x++;
	}
}
