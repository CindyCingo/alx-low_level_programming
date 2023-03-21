#include "main.h"
 
/**
 * _abs - computes the absolute value
 * of an integer.
 *
 * @c: input number as an integer.
 *
 * Return: absolute value
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l +48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
