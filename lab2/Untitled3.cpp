#include <stdio.h>


struct Distance {
    int feet;
    int inch;
};

int main() {
    Distance *ptr, d;
    ptr = &d;
    printf( "Enter feet: ");
    scanf("%d",(*ptr).feet);
    printf( "Enter inch: ");
    scanf("%d",(*ptr).inch);
    printf("Information \n");printf("feet:%d inch:%d",(*ptr).feet,(*ptr).inch);

    return 0;
}
