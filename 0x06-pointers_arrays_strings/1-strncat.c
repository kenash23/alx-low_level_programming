#include "main.h"
/**
 * *_strncat - like _strcat but it will use n bytes from src
 * @dest: string to be concaterated
 * @src: string to be concaterated until n limit
 * @n: number of bytes that will be sused from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return(dest);
}
