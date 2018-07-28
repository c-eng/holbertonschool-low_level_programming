#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: between strings
 * @n: number of additional params
 * @...: additional params
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list paramlist;
	char *current;

	if (n)
	{
		va_start(paramlist, n);
		for (i = 0 ; i < n ; i++)
		{
			current = va_arg(paramlist, char *);
			if (current)
				printf("%s", current);
			else
				printf("(nil)");
			if (separator && i != (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(paramlist);
	}
}
