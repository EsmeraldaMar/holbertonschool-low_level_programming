#ifndef _VARIADIC_H_
#define _VARIADIC_H_
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_struct - struct to print args
 * @op: operator
 * @f: Pointer to function to call
 */
typedef struct print_struct
{
        char *op;
        int (*f)();
} print_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
