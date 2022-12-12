#include <stdio.h>
void Gettext( char *text);
int main () {

   char b[20] ;
   Gettext(b);
   printf(" %s\n", b );
   return 0;
}
void Gettext( char *text){
    printf(" Input text" );
    gets(text);
}