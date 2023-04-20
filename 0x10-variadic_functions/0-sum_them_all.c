#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * Return: 0 if n = 0 or sum of parameters if succesful
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mym;
	unsigned int i, sum;

	sum = 0;
	va_start(mym, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(mym, int);
	}
	va_end(mym);
	return (sum);
}
