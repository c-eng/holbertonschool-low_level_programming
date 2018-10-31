#include "sort.h"

/**
 *get_bit - gets the bit value at a given index
 *@n: the int to get value from
 *@index: the index to get bit value from
 *Return: the bit value
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(n) * 8)
		return (-1);

	for (i = 0 ; i < index ; i++)
	{
		if (n >> 1 == 0)
			return (0);
		n = n >> 1;
	}
	return (n & 1);
}


/**
 *count_bits - counts the number of bits in a number
 *@n: the number to count
 *Return: the number of bits in n
 */

int count_bits(unsigned int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n = n >> 1;
	}
	return count;
}

/**
 *make_array - makes new array for radix sort
 *@array: the starting array
 *@size: the size of the array
 *Return: void
 */

void make_array(int *array, size_t size, size_t loc)
{
	int new_array[sizeof(array)];
	size_t i, j = 0;
	int count = 0;

	for (i = 0; i < size; i++)
	{
		if (get_bit((unsigned int) array[i], loc) == 0)
			count++;
	}
	for (i = 0; i < size; i++)
	{
		if (get_bit((unsigned int) array[i], loc) == 0)
		{
			new_array[j] = array[i];
			j++;
		}
		else
		{
			new_array[count] = array[i];
			count++;
		}
	}
	for (i = 0; i < size; i++)
	{
		array[i] = new_array[i];
	}
	print_array(array, size);
}



/**
 *radix_sort - sorts an array of ints using radix sort method
 *@array: the array to be sorted
 *@size: the size of the array
 *Return: void
 */

void radix_sort(int *array, size_t size)
{
	size_t i;
	unsigned int biggest = array[0];
	unsigned int j;

	for (i = 0; i < size; i++)
	{
		if ((int) biggest < array[i])
			biggest = array[i];
	}
	biggest = count_bits(biggest);
	for (j = 0; j < (unsigned int) biggest; j++)
	{
		printf("%d\n", biggest);
		printf("befor make array\n");
		make_array(array, size, j);
		printf("after make array\n");
	}
}
