#include "main.h"
/**
 * main - Entry point
 * _islower shows 1
 * lower case characters
 * return 1
 * Checks if a character is a lowercase letter.
 * @param c The character to check.
 * @return Returns 1 if the character is a lowercase letter, otherwise 0.
 * main - Entry point
 * Return: alway
 * c The character to check.
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
