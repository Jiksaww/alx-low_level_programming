#include "main.h"
#inchlude <unistd.h>
/**
*_putchar-writes the charactar c to stdout
*@c: The chaeacter to print
*
*Return: on success 1.
*On error, -1 is returned, and errno is set appropriately.
*/
int _ putchar(char c)

return (write(1, &c, 1));
