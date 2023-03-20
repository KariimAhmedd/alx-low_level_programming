#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			putchar((j < 9) ? ',' : '\n');
		}
	}

	return (0);
}
