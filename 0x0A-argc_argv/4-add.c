#include <stdio.h>
#include <stdlib.h>


/**
* main - adds positive numbers.
* @argc: argument counter
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int p, o, d = -1;
char *c;	/*flag*/


if (argc < 2)
{
printf("0\n");
return (0);
}


for (p = 1; *(argv + p); p++)
{
o = strtol(*(argv + p), &c, 10);
if (*c)	/*Condition if one of the number contains symbols not digits*/
{
printf("Error\n");
return (1);
}
else
{
d += o;
}
}
printf("%d\n", d);


return (0);
}
