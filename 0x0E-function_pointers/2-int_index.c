/**
 * int_index - searches for integer
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to compa function
 *
 * Return: array index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
