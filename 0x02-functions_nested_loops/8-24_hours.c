#include "main.h"

/**
 * jack_bauer - Print time
 * Description: function returns time
 * Return: notthing
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 24; i++)
		for (j = 0; j <= 59; i++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i);
			_putchar(':');
			if (j < 10)
				_putchar('0');
			_putchar(j);
			_putchar('\n');
		}
}
