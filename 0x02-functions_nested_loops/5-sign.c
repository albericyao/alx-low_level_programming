#include "main.h"

/**
 * print_sign - Print sign
 * @c: An input int
 * Description: function returns sign value
 * positive, zero or negative.
 * Return: 1 or 0 or -1
 */
int print_sign(int c)
{
	if (c < 0)
	{
		return (-1);
	}
	else if (c > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
