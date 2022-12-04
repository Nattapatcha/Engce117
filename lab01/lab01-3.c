#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int operation(int a, int b, int (*function)(int, int))
{
    return (*function)(a, b);
}
int main()
{
    int a, b, result;
    printf("Enter first number :");
    scanf(" %d", &a);
    printf("Enter seg number :");
    scanf(" %d", &b);
    result = operation(a, b, add);
    printf("result : %d", result);
    return 0;
}