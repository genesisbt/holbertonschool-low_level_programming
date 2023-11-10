#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function name
 * @format: something
 *
 * Description: function sum of all parameters passed
 *
 * Return: result of sum
 */

void print_all(const char * const format, ...)
{
	while (format != NULL)
	{
	va_list lista;
	char *sep = ", ";
	int c1 = 0;
	char *string;

	va_start(lista, format);
	while (format[c1] != '\0')
	{
		switch (format[c1])
		{
			case 'c':
				printf("%c", va_arg(lista, int));
				break;
			case 'i':
				printf("%i", va_arg(lista, int));
				break;
			case 'f':
				printf("%f", va_arg(lista, double));
				break;
			case 's':
				string = va_arg(lista, char*);
				printf("%s", (string == NULL) ? "(nil)" : string);
				break;
		}
		if (format[c1 + 1] != '\0' && (format[c1] == 'c' || format[c1] == 'i'
		  || format[c1] == 'f' || format[c1] == 's'))
			printf("%s", sep);
		c1++;
	}
	putchar('\n');
	va_end(lista);
	break;
	}
	if (format == NULL)
		putchar('\n');
}
