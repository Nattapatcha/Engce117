#include <stdio.h>

void go( int ***p, int **z ); //prototype

int main() {
    int *c = new int ;
    int *b = new int ; 
    int **a ;
    *b = 10 ;*c = 20 ;
    go(&a, &b) ;
    printf( "%d %p %p %p\n", **a, *a, a, &a ) ;
    printf("------------------------\n");
    go(&a, &c) ;
    printf( "%d %p %p %p\n", **a, *a, a, &a ) ;
    return 0 ;
} //end function

void go( int ***p, int **z ){
    *p = z;
    printf( "%d %p %p %p\n", ***p, **p, *p, p ) ;
} //end function