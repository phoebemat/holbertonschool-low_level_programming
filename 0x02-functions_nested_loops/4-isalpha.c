/**
 * _isalpha - checks if a letter of alphabet
 * @c: character var for letters
 *
 * Return: 1 if letter, 0 if not a letter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c > 96 && c < 123))
	return (1);
	else
	return (0);
}
