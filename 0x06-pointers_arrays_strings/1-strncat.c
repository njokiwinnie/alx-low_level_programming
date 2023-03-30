#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings
 * n bytes from scr which is not null terminated
 * @dest: first string
 * @src: second string
 * @n: number of bytes of scr string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
