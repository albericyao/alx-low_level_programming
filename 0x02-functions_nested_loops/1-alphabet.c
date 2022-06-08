#include <unistd.h>
#include "main.h"
/**
 * main - alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;
	char convert;

	for (i = 95; i < 123; i++)
	{
		convert = i;
		_putchar(convert);
	}
	_putchar('\n');
}
