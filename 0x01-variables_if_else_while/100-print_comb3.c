#include <stdio.h>

/**
 * main - prints all minimum combinations of two digits ascending order
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
			if (i != i2 && i < i2)
			{
				if (i2 > 1 || i > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(t);
				putchar(o);
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
