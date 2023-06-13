#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - sqrt using recursion
 * @n: number in question
 *
 * Return: -1 if n has no natural squareroot
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number to be investigated
 * @i: iterator value
 *
 * Return: a number from resulting root
 */
int _sqrt(int n, int i)		/*function takes an integer n as input*/
{
	int s = i * i;

	if (s > n)
		return (-1);
	if (s == n)
		return (i);
	return (_sqrt(n, i + 1));	/*indicate that n doesn't have a natural  sqt*/
}
