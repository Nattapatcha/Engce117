#include <stdio.h>

struct someStruct {
int total;
};
int test3(struct someStruct *state);


int main () {
    struct someStruct s;
    test3(&s);
    printf("after test3(): s.total = %d\n", s.total);

}
int test3(struct someStruct *state) {
    struct someStruct  Cop;
    Cop = *state;   
    Cop.total = 12; 
    *state = Cop;   
}
