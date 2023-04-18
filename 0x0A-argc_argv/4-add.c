#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function to add arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if no number passed error for character 1
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; ++i)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[argc]);
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}
