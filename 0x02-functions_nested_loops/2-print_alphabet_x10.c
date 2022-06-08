#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - alphabet x10
 *
 * Return: _putchar
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char convert;

        for (j = 0 ; j < 10 ; j++) 
	{
		for (i = 97; i < 123; i++)
		{
			convert = i;
			_putchar(convert);
		}
		_putchar('\n');
	}
}
