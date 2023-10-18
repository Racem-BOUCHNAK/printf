#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct params - Holds information about the format
 * @count: The number of characters printed
 *
 * Description: Used to keep track of the total number of characters
 * printed for the `_printf` function.
 */
typedef struct params
{
	int count;
} params_t;

/* Function prototypes */
int _printf(const char *format, ...);
int print_char(va_list ap, params_t *params);
int print_str(va_list ap, params_t *params);

#endif /* MAIN_H */
