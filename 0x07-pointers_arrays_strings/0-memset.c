#include "main.h"
/**
 * _memset - function that fills the first byte of tpe int n
 * from memory area pointed by s with constant b
 * @s: poniter
 * @b: costant byte
 * @n: firt byte
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n > 0)
	{
		*i = b;
		++i;
		--n;
	}
	return (s);
}
