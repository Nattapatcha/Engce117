#include <stdio.h>
struct test{
 int amount;
};
int demo( );

int main() {
    struct test P;
    P.amount = 7;
    printf("beforepassdemo = %d",P.amount);
    P.amount = demo();
    printf("afterpassdemo = %d",P.amount);
    return 0;

}
int demo() {
    int v = 10;
    v = v + 10;
    return v;
}