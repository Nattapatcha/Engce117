#include <stdio.h>

void main()
{
    int arr [300];
    int size, i, j, ctr;
    printf("Input  array size :");
    scanf("%d",&size);
    printf("------\n");
    for( i = 0 ; i<size ; i++)
    {
	    printf("element - [%d] : ",i+1);
	    scanf("%d",&arr[i]);
	}
    for ( i = 0 ; i < size ; i++)
    {
        ctr = 1;
        for( j = i + 1 ; j <= size-1; j++ )
        {
            if(arr[i]==arr[j] && arr[i] != 0 )
            {
                ctr++;
                arr[j] = 0;
            }
        }

        if(arr [i] != 0)
        {
            printf("%d -> %d\n", arr [i] , ctr);
        }
    }
}