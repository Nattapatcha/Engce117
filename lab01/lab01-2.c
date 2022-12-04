#include <stdio.h>

void main()
{
    int g[3][4] = {
        {10,20,30,40},
        {11,12,13,59},
        {20,30,40,15},
        
    };
    int (*j)[4] = g;
    for(int a = 0; a< 3 ; a++){
        for (int b = 0; b< 4 ; b++)
        {
            printf("%d ", j[a][b]);
        }
        printf("\n");
        
    }
    return 0;

}