#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/
int Parsing(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int P_char(va_list);
int P_string(va_list);
int P_percent(va_list);
int P_integer(va_list);
int print_numberber(va_list);


/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_numberber(unsigned int);


#endif

