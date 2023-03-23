#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @a: paramter to be checked
 * Return: a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
