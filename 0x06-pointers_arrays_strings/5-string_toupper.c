#include "main.h"

/**
 * string_toupper - change all the lowercase to uppercase
 * @str: string to return
 *
 * Return: string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
	}
	return (str);
}