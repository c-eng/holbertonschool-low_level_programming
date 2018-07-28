#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: between numbers
 * @n: number of additional params
 * @...: additional params
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list paramlist;

	if (n)
	{
		va_start(paramlist, n);
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(paramlist, int));
			if (separator && i != (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(paramlist);
	}
}
