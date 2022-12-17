#include <stdio.h>
struct People {             
  int Amount;         
  
};
typedef struct People Q;

int main () {
    struct People America;
    Q Iran;
    America.Amount = 10000000;
    Iran.Amount = 50000000;
    printf("Ameriaca:%d Iran:%d",America.Amount,Iran.Amount);
    }
