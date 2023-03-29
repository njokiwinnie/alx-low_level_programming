#include "main.h"
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
 /**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: pointer
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
