#include "main.h"

/*
 * main - prints -putchar
 *
 * return - 0
 */
int main(void)
{
char c[10]="_putchar";
int i;
for(i=0;i<8;i++)
{
_putchar(c[i]);
}
_putchar(10);
return (0);
}	
