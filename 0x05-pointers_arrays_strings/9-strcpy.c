#include <string.h>
#include "main.h"
/**
 * _strcpy - copy the value of one to another
 * @dest: pointer to copy
 * @src: pointer to buffer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	i = 0;

	for (; (i < len && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	*(dest + i) = '\0';
	return (dest);
}
