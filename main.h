#ifndef PRINTF
#define PRINTF

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct specifier - struct
 * @valid: char
 * @f: f
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int _putchar(char c);
int (*_flag(char j))(va_list);
int int_print_d(va_list f);
int int_print_i(va_list f);
int int_print_b(va_list f);
int int_print_u(va_list f);
int int_print_o(va_list f);
int int_print_x(va_list f);
int int_print_X(va_list f);
int int_print_c(va_list f);
int int_print_cs(char *str);
int int_print_s(va_list f);
int int_print_r(va_list f);
int int_print_R(va_list f);
int int_print_S(va_list f);
int int_print_p(va_list f);
#endif /* PRINTF */
