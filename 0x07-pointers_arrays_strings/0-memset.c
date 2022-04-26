#include "main.h"
/**_memset - fills memory with constant byte
 * @s: input pointer to char
 * @b: input variable to char
 * @n: unsigned int variable
 * Return: Pointer on @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

