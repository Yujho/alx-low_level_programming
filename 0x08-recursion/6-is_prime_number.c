#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - function checks for prime numbers
 * @i: point iterator
 * @n: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
	return (0);	/*n is divisible by i, hence not prime*/
	if ((n / i) < i)
	return (1);
	return (check_prime(n, i + 1));
}
