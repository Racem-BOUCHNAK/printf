/* main.h */

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct params - Struct to hold various parameters for a format specifier
 * @flags: Flags (e.g., '-', '0', '#', '+', ' ')
 * @width: Minimum field width
 * @precision: Precision for numeric types
 * @size: Size modifier (e.g., 'h', 'l')
 * @specifier: Format specifier (e.g., 'c', 's', 'd', 'i', 'u', 'x', 'X', 'o', 'b', 'p', '%')
 */
typedef struct params
{
    char flags;
    int width;
    int precision;
    char size;
    char specifier;
} params_t;

/* Function prototypes */
int _printf(const char *format, ...);
int process_format_specifier(const char **format, va_list args);
int custom_putchar(int c);
int print_str(char *str);

#endif /* MAIN_H */
