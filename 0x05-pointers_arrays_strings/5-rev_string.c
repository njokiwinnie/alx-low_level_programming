#include <string.h>
#include "main.h"

/**
 * rev_string - rev a string
 * @s: string array
 *
 * Return: None
 */
void rev_string(char *s)
{
	int i;
	char v[2000];
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		v[i] = s[len - i - 1];
	}
	v[len] = '\0';

	for (i = 0; i < len; i++)
	{
		s[i] = v[i];
	}
}

