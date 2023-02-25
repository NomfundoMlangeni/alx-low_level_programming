#include "main.h"
#include <stdio.h>

/**
 * main - print the number from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 print Buzz instead of the number
 * Return: always 0
 */
int main(void)
{
int x;

for (x = 1; x <= 100; x++)

if ((x % 3 == 0) && (x % 5 == 0))
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf(" % d", x);
}
if (x != 100)
{
printf(" ");
}
printf("\n");
return (0);
}
