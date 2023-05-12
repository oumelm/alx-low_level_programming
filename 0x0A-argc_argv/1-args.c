#include <stdio.h>

/**
 * main - print number of arguments passed.
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of commande line arguments.
 * Return: 0-success, non-zero-fail.
 */

int main(int argc, char *argv[] __attrribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
