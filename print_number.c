#include "main.h"

/**
 * print_numberber - prints a numberber send to this function
 * @args: List of arguments
 * Return: The numberber of arguments printed
 */
int print_numberber(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int number;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		number = n * -1;
	}
	else
		number = n;

	for (; number / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + number / div);
		number %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print_unsgined_numberber - Prints an unsigned numberber
 * @n: unsigned integer to be printed
 * Return: The amount of numberbers printed
 */
int print_unsgined_numberber(unsigned int n)
{
	int div;
	int len;
	unsigned int number;

	div = 1;
	len = 0;

	number = n;

	for (; number / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + number / div);
		number %= div;
		div /= 10;
	}

	return (len);
}
