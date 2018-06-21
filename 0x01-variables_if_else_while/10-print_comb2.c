#include <stdio.h>

/**
 * main - prints base16 digits
 *
 * Return: 0
 */
int main(void)
{
	int i, i2, o, t;

	o = '0';
	t = '0';
	for (i = 0 ; i < 10 ; i++)
	{
		for (i2 = 0 ; i2 < 10 ; i2++)
		{
			putchar(t);
			putchar(o);
			if (i != 9 || i2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			if (o == '9')
			{
				o = '0';
			}
			else
			{
				o++;
			}
		}
		t++;
	}
	putchar('\n');
	return (0);
}
