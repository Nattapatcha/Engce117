#include <stdio.h>

void main()
{
    int *a;
    int b=10;
    a=&b;
    printf("a = %d\n", *a);
    b=20;
    printf("a = %d\n", *a);
    *a = 50;
    printf("a = %d\n", *a);
    printf("b = %d\n", b);
    return 0;
}