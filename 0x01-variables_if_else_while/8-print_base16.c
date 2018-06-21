#include <stdio.h>

/**
 * main - prints base16 digits
 *
 * Return: 0
 */
int main(void)
{
	int i, c;
	char w;

	w = 'a';
	c = '0';
	for (i = 0 ; i < 16 ; i++)
	{
		if (i < 10)
		{
			putchar(c);
			c++;
		}
		else
		{
			putchar(w);
			w++;
		}
	}
	putchar('\n');
	return (0);
}
