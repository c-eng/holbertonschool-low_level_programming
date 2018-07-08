/**
 * leet - leets a string s
 * @s: string to be leeted
 *
 * Return: leeted string
 */

char *leet(char *s)
{
	int i, j;
	char *dn = "aeotl", *up = "AEOTL", *lt = "43071";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; dn[j] != '\0' ; j++)
		{
			if (s[i] == dn[j] || s[i] == up[j])
			{
				s[i] = lt[j];
			}
		}
	}
	return (s);
}
