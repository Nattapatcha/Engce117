#include <stdio.h>

int BinSearch(int data[6], int n, int find);

int main()
{
    int data[6] = {1, 2, 3, 4, 5, 7};
    int n, find = 5;
    int pos = BinSearch(data, n, find);
    return 0;
} // end function
int BinSearch(int data[6], int n, int find){
    int i,a,b,pos;
    i=b+1;a=n-1;
    while(i<a){
        b=(i+a)/2;
        if(data[b]<find){
            i=b+1;
        }else{
            a=b;
        }
    }
    pos = (data[i] == find ? i :-1);
    printf("Found %d at %d",find,pos);
}