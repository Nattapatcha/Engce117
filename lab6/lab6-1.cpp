#include <stdio.h>
#include <string.h>

struct studentNode {
char name[ 20 ] ;
int age ;
char sex ;
float gpa ;
struct studentNode *next ;
struct studentNode *back ;
} ;
struct studentNode *AddNode( struct studentNode **startNode, char n[], int a, char s, float g ); // prototype
void InsNode( struct studentNode *preNode, char n[], int a, char s, float g); // prototype
void DelNode( struct studentNode **now);// prototype
void GoBack( struct studentNode **now);// prototype
void ShowAll( struct studentNode *walk ) ;

int main() {
struct studentNode *start, *now ;
start = NULL ;
now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
GoBack( &now ) ;
// DelNode( now ) ; ShowAll( start ) ;
// DelNode( now ) ; ShowAll( start ) ;
// DelNode( now ) ; ShowAll( start ) ;
return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
while( walk != NULL ) {
printf( "%s ", walk->name ) ;
walk = walk->next ;}//end while
printf( " " ) ;
}//end function
struct studentNode *AddNode( struct studentNode **startNode, char n[], int a, char s, float g ){
    struct studentNode *temp = NULL;
    while (*startNode != NULL){
        temp = *startNode;
        startNode= &(*startNode)->next;
    }//endwhile
    *startNode = new struct studentNode;
    strcpy((*startNode)->name, n);
    (*startNode)->age = a;
    (*startNode)->sex = s;
    (*startNode)->gpa = g;
    (*startNode)->next = NULL;
    (*startNode)->back = temp;
    return *startNode;
}
void InsNode( struct studentNode *preNode, char n[], int a, char s, float g){

    if(preNode->back != NULL){
        preNode->back->next = new struct studentNode;
        strcpy(preNode->back->next->name, n);
        preNode->back->next->age = a;
        preNode->back->next->sex = s;
        preNode->back->next->gpa = g;
        preNode->back->next->next = preNode;
        preNode->back->next->back = preNode->back;
        preNode->back = preNode->back->next;
    }
}
void GoBack(struct studentNode **now){
    (*now) = (*now)->back;

}