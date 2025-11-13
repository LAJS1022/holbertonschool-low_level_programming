#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 *
 * Return: sum of parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to print between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings separated by a string
 * @separator: string to print between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
