#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of cents to
 * make change for certain amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, h, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)	/* means that no arguments were passed*/
	{
		printf("Error\n");
		return (1);	/*failure returns 1*/
	}

	x = atoi(*(argv + 1));
	i = 0;	/*innitialization*/

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (h = 0; h < 5 && x >= 0; h++)
	{
		while (x >= *(cents + h))
		{
			i++;
			x -= *(cents + h);
		}
	}

	printf("%d\n", i);
	return (0);	/*program is successful*/
}
