#include <stdio.h>


/**
* main - prints the program name
* @argc: number of argument count
* @argv: array of arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char **argv)
{
(void)argc;


printf("%s\n", *(argv + 0));
return (0);
}
