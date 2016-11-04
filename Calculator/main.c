#include <stdio.h>
#include <stdlib.h>

int addition (int a, int b)
{
    return a+b;
}

int soustraction (int c, int d)
{
    return c-d;
}

int main()
{
    printf("L'addition de a et de b vaut %d\n", addition(1,4));
    printf("La soustraction de c et de d vaut %d\n", soustraction(1,4));
    return 0;
}
