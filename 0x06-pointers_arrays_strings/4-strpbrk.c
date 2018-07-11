/**
 * not_scanf - not scanf
 * @str: string not to be scanned
 * @c: char not to be scanned for
 *
 * Return: 0 or 1
 */

int not_scanf(char *str, char c)
{
	int i;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		if (*(str + i) == c)
			return (1);
	}
	return (0);
}

/**
 * _strpbrk - searches string s for any set ob bytes accept
 * @accept: set of bytes
 * @s: string
 *
 * Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0 ; *(s + i) != '\0'; i++)
	{
		if (not_scanf(accept, *(s + i)))
		{
			return (s + i);
		}
	}
	return ('\0');
}
