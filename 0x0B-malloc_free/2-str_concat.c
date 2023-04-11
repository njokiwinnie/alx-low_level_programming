#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: secind string
 * Return: pointer of the new location otherwise Null if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	str = malloc(sizeof(char) * (i + c + 1));

	if (str == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		str[i] = s2[c];
		i++, c++;
	}
	str[i] = '\0';
	return (str);
}
