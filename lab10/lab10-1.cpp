#include <stdio.h>

long SumLoop(int);
long SumRecur(int);

int main()
{
    printf("SumLoop(n) = %d", SumLoop(10));
    printf("SumRecur(n) = %d", SumRecur(10));
    return 0;
} // end function
long SumLoop(int l){
    int c;
    long all = 1 ;
    for(c = 1 ; c<=l;c++){
        all *=c;
    }
    return all;
}
long SumRecur(int l){
    if(l > 1){
        return l * SumRecur(l-1);
    }
    return 1;
}