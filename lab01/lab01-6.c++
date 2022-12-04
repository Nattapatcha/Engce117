#include <stdio.h>
int *getarr2d( int *row, int *col); // prototype
int main()
{
    int row, col, *arr;
   arr = getarr2d(&row, &col);
    delete [] arr;
    return 0;
}
int *getarr2d( int *row, int *col)
{
    int *a;
    printf("input row & col");
    scanf("%d %d", row, col);
    a = new int[*row * *col];
    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *col; j++)
        {
            printf("a [%d] [%d] :", i, j);
            scanf("%d", &a[i * * col + j]);
        }
    }
    return a;
}