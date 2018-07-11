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
 * _strspn - gets length of substring accept from string s
 * @accept: substring
 * @s: string
 *
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ss = 0, ssi = 0;

	for (i = 0 ; *(s + i) != '\0'; i++)
	{
		if (not_scanf(accept, *(s + i)))
		{
			if (ss == 0)
				ss = 1;
			ssi++;
		}
		else if (ss == 1)
			return (ssi);
	}
	return (ssi);
}
