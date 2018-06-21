#include <stdio.h>

/**
 * main - prints the byte size of various types
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long b;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));

	return (0);
}
