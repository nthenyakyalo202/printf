#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int a;

_printf("%R\n", "123");
a = _printf("%R\n", "hello");
_printf("%d\n", a);
a = printf("%s\n", "hello");
printf("%d\n", a);
a = _printf("%R\n", "main school");
printf("%d\n", a);
return (0);
}
