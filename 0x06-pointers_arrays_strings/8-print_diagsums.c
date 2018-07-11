#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonals of square matrix a
 * @a: square matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, sze = size - 1;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum1 += *(a + (size * i + j));
			if (i == (sze - j))
				sum2 += *(a + (size * i + j));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
