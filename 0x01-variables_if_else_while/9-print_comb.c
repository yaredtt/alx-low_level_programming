#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
{
	putchar(i + '0');

	if (i != 9)
{
	putchar(',');

	putchar(' ');
}

}

	putchar('\n');

	return (0);
}
