#include "main.h"

/**
 * _print_string - Prints a string from a variable argument list
 * @s: argument
 * Return: the length of the string.
 */

int _print_string(char *s)
{
	int len;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = _strlen(s);
	write(1, s, len);
	return (len);
}
