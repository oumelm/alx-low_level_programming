#include "main.h"

/**
 * _strcat - function that concatenates
 *		two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j]
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
