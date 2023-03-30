#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies string from src to dest
 * @dest: string destination
 * @src: string source
 * @n: number of characters in string source
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
