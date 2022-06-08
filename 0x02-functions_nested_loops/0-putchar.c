#include <unistd.h>
#include "main.h"
/**
 * main - write _putchar
 *
 * Return: always 0
 */
int main(void)
{
	char out_put[8]="_putchar";
	int i;
	for (i = 0; i < 8; i++)
		_putchar(out_put[i]);
	_putchar('\n');
	return (0);
}
