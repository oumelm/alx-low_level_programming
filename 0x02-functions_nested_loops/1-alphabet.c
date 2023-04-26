#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: 'print the alphabet in lowercase'
 * Return: Always 0
 */
int print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	putchar('\n');
}
