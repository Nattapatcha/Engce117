#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    do
    {
        printf("Choose book \n");
        printf("see coverandstory \n");
        printf("Like it? : ");
        scanf("%s", &a);
    } while (strcmp(a, "no") == 0);
    printf("Buy it \n");
}