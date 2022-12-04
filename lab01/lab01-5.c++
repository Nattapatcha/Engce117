#include <stdio.h>
void getarr2d(int **a, int *row, int *col); // prototype
int main()
{
    int r, c, *arr;
    getarr2d(&arr, &r, &c);
    return 0;
}
void getarr2d(int **a, int *row, int *col)
{
    printf("input row & col");
    scanf("%d %d", row, col);
    *a = new int[*row * *col];
    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *col; j++)
        {
            printf("a [%d] [%d] :", i, j);
            scanf("%d", &(*a)[i ** col + j]);
        }
    }
}