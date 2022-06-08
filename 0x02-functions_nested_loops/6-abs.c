#include "main.h"

/**
 * _abs - Print abs
 * @c: An input int
 * Description: function returns sign value
 * positive, zero or negative.
 * Return: abs value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-1 * c);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
