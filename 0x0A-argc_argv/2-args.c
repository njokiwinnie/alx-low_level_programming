#include <stdio.h>
/**
 * main - function to print all arguments
 * @argc: number of arguments
 * @argv: array of argument names
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
