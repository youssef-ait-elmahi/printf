#include "main.h"
/**
 * _print_int - prints an integer
 * @num: integer to print
 *
 * Return: number of characters printed
 */
int _print_int(int num)
{
	int ncp = 0;

	if (num < 0)
	{
		_putchar('-');
		ncp++;
		num = -num;
	}

	ncp += _print_unsigned_int(num);

	return (ncp);
}

/**
 * _print_unsigned_int - prints an unsigned integer
 * @num: unsigned integer to print
 *
 * Return: number of characters printed
 */
int _print_unsigned_int(unsigned int num)
{
	int ncp = 0;

	if (num / 10)
	{
		ncp += _print_unsigned_int(num / 10);
	}

	_putchar((num % 10) + '0');
	ncp++;

	return (ncp);
}
