/**
 * _strlen_recursion - strlen recursion
 * @s: string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * _p - determines if s is plaindrome
 * @s: string
 * @l: string length
 * @i: position index
 *
 * Return: 1 if yes, 0 if no
 */

int _p(char *s, int i, int l)
{
	if (s[i] == s[l])
	{
		if (i == l || i + 1 == l || l == -1)
			return (1);
		else
			return (_p(s, i + 1, l - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - checks if s is palindrome
 * @s: string
 *
 * Return: 1 if yes, 0 if no
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	return (_p(s, 0, l));
}
