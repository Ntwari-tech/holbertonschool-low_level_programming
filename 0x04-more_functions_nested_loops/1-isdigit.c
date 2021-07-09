/**
 * _isdigit- checks for a digit (0 through 9)
 * @c: int type
 * Return: 1 is yes, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	else
		return (0);
}
