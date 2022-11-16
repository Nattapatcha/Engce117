#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    do
    {
        printf("find target group \n");
        printf("choose social media \n");
        printf("Promote and ads\n");
        printf("have 1000 customers? : ");
        scanf("%s", &a);
    } while (strcmp(a, "no") == 0);
    printf("have 1000 customers\n");
}