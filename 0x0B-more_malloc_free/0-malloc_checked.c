#include <stdlib.h>

/**
 * malloc_checked - mallocs with check
 * @b: size of memory
 *
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	void *cheque = malloc(b);

	if (cheque)
		return (cheque);
	exit(98);
}
