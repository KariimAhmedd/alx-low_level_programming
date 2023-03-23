#include "main.h"
/**
 * main - Entry point
 * _islower shows 1
 * lower case characters
 * return 1:
 * Return: always
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
