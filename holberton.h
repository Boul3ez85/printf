#ifndef _PRINTF_H
#define _PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *struct format - structure for printing various types
 *@spc: type to print
 *@f: function to print
 */

typedef struct format
{
char *spc;
int (*f)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list parameters);
int print_s(va_list parameters);
int print_percent(__attribute__((unused))va_list parameters);
int print_i(va_list parameters);
int print_d(va_list parameters);
int (*get_struct(const char a))(va_list);
int print_integer(va_list parameters);
int print_decimal(va_list parameters);

#endif
