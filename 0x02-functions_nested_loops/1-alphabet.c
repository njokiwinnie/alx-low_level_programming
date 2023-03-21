#include "main.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * main - check code
 * print alpphabet iin lower case
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');

	return (0);
}
