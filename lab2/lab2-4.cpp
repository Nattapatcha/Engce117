#include <stdio.h>
void Gettext( char **text);
int main () {

   char *b ;
   Gettext(&b);
   printf(" %s\n", b );
   return 0;
}
void Gettext( char **text){
    *text = new char[20];
    printf(" Input text" );
    gets(*text);
}