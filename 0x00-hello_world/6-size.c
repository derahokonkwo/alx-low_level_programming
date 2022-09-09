#include <stdio.h>

/**
 * main - Entry point
 * Description: prints out size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{
{
char d;
int e;
long int r;
long long int a;
float h;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(h));
}

return (0);
}
