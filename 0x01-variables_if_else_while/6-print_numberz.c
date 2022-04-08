#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print all base 10 single digit numbers
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9 ; ++a)
		putchar('0' + a);
	putchar('\n');
	return (0);
}

