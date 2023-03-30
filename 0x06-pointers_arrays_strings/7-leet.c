#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * leet - a function that encodes a string into 1337.
 * @str: an input string to encode
 * Return: An encode string
 */
char *leet(char *str)
{
	char *result = (char *) malloc(strlen(str) + 1);
	int i, j;

	unsigned char c, leet_map[128] = {0};

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';
	for (i = 0, j = 0; (c = str[i]) != '\0'; i++, j++)
	{
		result[j] = leet_map[(unsigned char)c] ? leet_map[(unsigned char)c] : c;
	}
	result[j] = '\0';
	return (result);
}
