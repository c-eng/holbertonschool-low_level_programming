#include <stdarg.h>

/**
 * sum_them_all - sums all integer parameters
 * @n: number of parameters
 * @...: variable number of functions
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list paramlist;

	if (n)
	{
		va_start(paramlist, n);
		for (i = 0 ; i < n ; i++)
		{
			sum += va_arg(paramlist, int);
		}
		va_end(paramlist);
	}
	return (sum);
}
