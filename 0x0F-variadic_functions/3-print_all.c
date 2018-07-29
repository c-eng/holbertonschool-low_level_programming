#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all
 * @format: list of argument types
 * @...: params
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list paramlist;
	unsigned int i = 0;
	char *temp;

	va_start(paramlist, format);
	while (format[i] != '\0')
	{
		if (i != 0)
		{
			switch (format[i])
			{
			case 'c':
				printf(", ");
				break;
			case 'i':
				printf(", ");
				break;
			case 'f':
				printf(", ");
				break;
			case 's':
				printf(", ");
				break;
			}

		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(paramlist, int));
			break;
		case 'i':
			printf("%d", va_arg(paramlist, int));
			break;
		case 'f':
			printf("%f", va_arg(paramlist, double));
			break;
		case 's':
			temp = va_arg(paramlist, char *);
			if (!temp)
			{
				printf("(nil)");
				break;
			}
			printf("%s", temp);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(paramlist);
}
