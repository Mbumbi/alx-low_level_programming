#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the no of the signs to be printed
 * Return: 1 if number is greater than zero
 * 0 if the no is zero
 * -1if no is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
