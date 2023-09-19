#include "main.h"
/**
 * P_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int P_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * P_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int P_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * P_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int P_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * P_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int P_integer(va_list list)
{
	int number_length;

	number_length = print_numberber(list);
	return (number_length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numberbers
 */
int unsigned_integer(va_list list)
{
	unsigned int number;

	number = va_arg(list, unsigned int);

	if (number == 0)
		return (print_unsgined_numberber(number));

	if (number < 1)
		return (-1);
	return (print_unsgined_numberber(number));
}
