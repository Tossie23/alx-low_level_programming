#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print arguments of different types.
 * @format: The format string indicating the types of arguments.
 * @...: The list of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *format_ptr = format;
	char *separator = "";
	char current_format;

	va_start(args, format);

	while (format && *format_ptr)
	{
		current_format = *format_ptr;

		if (current_format == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (current_format == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (current_format == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (current_format == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}

		separator = ", ";
		format_ptr++;
	}

	printf("\n");
	va_end(args);
}
