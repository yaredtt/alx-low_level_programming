#include "main.h"
/**
 * puts_half - prints the second half
 * @str: string v
 * Return: void
 */
void puts_half(char *str)
{
	int l, m, a, z;
	char first[*str], second[*str];

	l = strlen(*str);
	m = l / 2;
	for (a = 0; a < m; a++)
	{
	first(*str) = *str[a];
	}
	first[*str] = '\0';
	for (a = m, z = 0; a <= l; a++, z++)
	{
	second[z] = *str;
	}
	return (0);
}
