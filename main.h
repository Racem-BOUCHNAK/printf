#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct params - Parameters struct
 * @width: Minimum field width
 * @precision: Precision
 * Description: Specifies the minimum number of characters to be printed.
 * If the value to be printed is shorter than this number,
 * the result is padded with blank spaces.
 * The value is not truncated even if the result is larger.
 */
typedef struct params
{
    int width;
    int precision;
} params_t;

int _printf(const char *format, ...);
int process_format_specifier(const char **format, va_list args);
int custom_putchar(char c);
int print_str(char *str);

#endif /* MAIN_H */
