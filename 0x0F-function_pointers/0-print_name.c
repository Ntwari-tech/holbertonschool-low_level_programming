#include "function_pointers.h"

/**
* print_name - fn prt the name
* @name: variable
* @f: *p to a fn  prt a name
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name);
}
