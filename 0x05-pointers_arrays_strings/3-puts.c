#include "main.h"
/**
 * _puts - prints a sting
 * @str: a pointer to an int that will be changed
 *
 * Return: void
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m] != '\0'; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
