#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#define TRUE 1
#define FALSE 0
#define null (void *)0
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * struct printer - A new struct type defining a printer.
 * @print: a function that prints a data type corresponding
 *  to symbol
 * @symbol: represents a data type
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*variadic_functions.h*/
