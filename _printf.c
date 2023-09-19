#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int P_charS;
const	conver_t f_list[] = {
		{"c", P_char},
		{"s", P_string},
		{"%", P_percent},
		{"d", P_integer},
		{"i", P_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling Parsing function*/
	P_charS = Parsing(format, f_list, arg_list);
	va_end(arg_list);
	return (P_charS);
}

