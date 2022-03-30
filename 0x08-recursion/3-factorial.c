#include <stdio.h>
#include "main.h"

/**
 * factorial - calculate factorial 0f number
 *
 * @n: - intiger
 *
 * Return: Returns the vactorial of the number
 */
	int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
