#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - outputs the entries
 * @a: input of integer matrix
 * @size: input of sizes
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, j;

	sum1 = 0;
	sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += a[j];
		a += size;
	}
	a -= size;

	for (j = 0; j < size; j++)
	{
		sum2 += a[j];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
