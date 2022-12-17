#include <stdio.h>


struct Distance {
    int feet;
    int inch;
};

int main() {
    Distance *ptr, d;
    ptr = &d;
    printf( "Enter feet: ");
    scanf("%d",&d.feet);
    printf( "Enter inch: ");
    scanf("%d",&d.inch);
    printf("Information \n");
    printf("feet:%d inch:%d",d.feet,d.inch);

    return 0;
}