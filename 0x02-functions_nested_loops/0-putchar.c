#include "main.h"

/*
 * main - prints -putchar
 *
 * return - 0
 */
int main(void)
{
char c[8]="_putchar";
for(int i=0;i<8;i++)
{
_putchar(c[i]);
}
_putchar(8);
return (0);
}	
