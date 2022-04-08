#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: lowercase in reverse
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
