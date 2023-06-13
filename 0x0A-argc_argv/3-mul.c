#include <stdio.h>
#include <stdlib.h>


/**
* main - multiplies two numbers.
* @argc: argument count
* @argv: arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int p, z;


	if (argc < 3 || argc > 3)
	{
	printf("Error\n");	/*no 2arguments recieved returnserror*/
	return (1);
	}


	p = atoi(*(argv + 1));
	z = atoi(*(argv + 2));
	printf("%d\n", p * z);


	return (0);
}
