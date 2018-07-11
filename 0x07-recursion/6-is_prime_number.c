/**
 * is_prime - actually determines if n is prime
 * @n: initial number
 * @s: initial value store
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime(int n, int s)
{
	if (n < 1)
		return (0);
	else if (n == 1)
		return (1);
	else
	{
		if (s % n == 0)
			return (0);
		else
			return (is_prime(n - 1, s));
	}
}

/**
 * is_prime_number - determines of n is prime
 * @n: int
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime(n - 1, n));
}
