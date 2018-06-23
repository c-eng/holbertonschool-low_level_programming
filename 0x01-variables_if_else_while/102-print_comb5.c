#include <stdio.h>

/**
 * main - prints all combinations of unique two-digit pairs ascending order
 *
 * Return: 0
 */
int main(void)
{
	int i, i2, t1, o1, t2, o2;

	for (i = 0 ; i < 99 ; i++)
	{
		t1 = (i / 10) + '0';
		o1 = (i % 10) + '0';
		for (i2 = i + 1 ; i2 < 100 ; i2++)
		{
			t2 = (i2 / 10) + '0';
			o2 = (i2 % 10) + '0';
			putchar(t1);
			putchar(o1);
			putchar(' ');
			putchar(t2);
			putchar(o2);
			if (i != 98 || i2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
