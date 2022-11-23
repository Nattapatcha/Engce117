#include <stdio.h>

int main()
{
    int n,ans,series=0;
    printf("Userinput");
    scanf("%d", &n);
    printf("series = ");
    for ( int i = 1; i <= n; i++)
    {
        ans += series;
        if(i <= n+1){
            printf(" %d", series);
            printf("+");

        }
        else {
            printf("%d",series);

        }
        
        series = series * 10 + 9;

    }
    printf("\n Sum = %d", ans);


}