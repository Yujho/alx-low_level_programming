#include <stdio.h>
#include "main.h"

/**
 * main - prints all received arguments
 * @argc: argument numbers
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; argc > k; k++)
	{
		printf("%s\n", *(argv + k));
	}

	return (0);	/*successful ran program*/
}
