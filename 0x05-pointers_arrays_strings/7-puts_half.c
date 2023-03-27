#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string of chatacter
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half_len = (len + 1) / 2;
	int i;

	for (int i = half_len; i < len; i++)
	       printf("%c", str[i]);

	printf('\n');
}	
