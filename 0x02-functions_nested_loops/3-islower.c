#include "main.h"
#include <stdio.h>
/**
 * main - checks lowercase character
 *
 * Return: 1 if c is lowercase
 * otherwise always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
