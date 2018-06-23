#include <stdio.h>

/**
 * main - prints all minimum combinations of three digits ascending order
 *
 * Return: 0
 */
int main(void)
{
	int i, i2, i3, o, t, h;

	for (i = 0 ; i < 8 ; i++)
	{
		h = i + '0';
		for (i2 = i + 1 ; i2 < 9 ; i2++)
		{
			t = i2 + '0';
			for (i3 = i2 + 1 ; i3 < 10 ; i3++)
			{
				o = i3 + '0';
				putchar(h);
				putchar(t);
				putchar(o);
				if (i != 7 || i2 != 8 || i3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
