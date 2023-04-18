#include "main.h"
#include <stdio.h>
/**
 * main - function for multiplying two numbers
 * @argc: number of arguments
 * @argv: array
 * Return: success otherwise Error
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
}
