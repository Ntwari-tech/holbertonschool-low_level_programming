#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prnt strng \n
* @separator: strng to be printed btn strng
* @n: # of strng passed to the fn
* @...: place of the last parameter
*/

void print_strings(const char *separator, const unsigned int n, ...)
{ char *string;
	unsigned int index;
	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("(nil)");

		}
		else
		{
			printf("%s", string);
		}
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
