#include <stdio.h>
/**
 * sara - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int sara(int i, int n)
{
	int k;

	k = n % i;
	if (k != 0 && i < n)
	{
		sara(i + 1, n);
	}
	if (k == 0)
	{
		return (0);
	}
	return (1);
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: Input
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (sara(2, n));
}
