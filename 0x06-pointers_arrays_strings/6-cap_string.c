#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string using word seperator
 * @n: string
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if ((n[i] - 1 == ' ' ||
		    n[i] - 1 == ',' ||
		    n[i] - 1 == ';' ||
		    n[i] - 1 == '.' ||
		    n[i] - 1 == '!' ||
		    n[i] - 1 == '?' ||
		    n[i] - 1 == '(' ||
		    n[i] - 1 == '"' ||
		    n[i] - 1 == ')' ||
		    n[i] - 1 == '{' ||
		    n[i] - 1 == '}' ||
		    n[i] - 1 == '\n' ||
		    n[i] - 1 == '\t' ||
		    i == 0) && n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
		i++;
	}
	return (n);
}
