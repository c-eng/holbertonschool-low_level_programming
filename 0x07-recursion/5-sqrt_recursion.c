/**
 * _sqart - Actually looks for sqrt
 * @n: decrementer
 * @s: holds original value
 *
 * Return: natural sqrt or -1 if none
 */

int _sqart(int n, int s)
{
	if (s == 0)
		return(n);
	else if (n < 1)
		return (-1);
	else if ((s / n == n) && (s % n == 0))
		return (n);
	else
		return (_sqart(n - 1, s));
}

/**
 * _sqrt_recursion - sqrt(n)
 * @n: int
 *
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	return (_sqart(n, n));
}
