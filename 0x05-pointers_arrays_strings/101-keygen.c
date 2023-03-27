#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random password
 */

int main(void)
{
	char c;

	int i;

	srand(time(0));
	while (i <= 3000)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}

	putchar(2500 - i);
	return (0);
}
