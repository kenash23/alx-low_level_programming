#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print numbers 0 to 9
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}

