#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int lower;

	for (lower = 97; lower <= 122; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
