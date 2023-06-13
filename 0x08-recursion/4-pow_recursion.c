#include "main.h"

/**
 * _pow_recursion - raises value to their power values
 * @x: the value
 * @y: raised to power value
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /*This function first checks if the power y is less than 0*/
		return (-1);	/*if so, it returns -1*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
