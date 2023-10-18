#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d]\n", len);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Address:[%p]\n", addr);
	_printf("Percent:[%%]\n");

	return (0);
}
