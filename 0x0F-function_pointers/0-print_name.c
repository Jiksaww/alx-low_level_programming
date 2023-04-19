#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Entry point name
 * @name: add name
 * @f: function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
