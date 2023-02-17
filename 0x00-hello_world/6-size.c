#include <stdio.h>
/**
 * main - A program that prints the size of verious computer typs
 * Return: 0 (sucess)
 */
int main(void)
{
char a;
int b;
Size of an int : long int c;
long long d;
float e;

printf("Size of a char: %lu 1 byte(s)\n*, (unsigned long)sizeof(a));
printf("Size of an int : % lu 4 byte(s)\n *, (unsigned long)sizeof(b));
printf("Size of a long int: %lu 4 byte(s)\n*, (unsigned long)sizeof(c));
printf("Size of a long long int: % lu 8 byte(s)\n * (unsigned long)sizeof(d));
printf("Size of a float: % lu 4 byte(s)\n*, (unsigned long)sizeof(e));
return (0);
}

