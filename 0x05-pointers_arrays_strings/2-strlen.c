#include "main.h"
/**
 * _strlen - return length of string
 * @s: string variable
 * Return: length of string
 */
	int _strlen(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
{
	r++;
}
	return (r);
}
