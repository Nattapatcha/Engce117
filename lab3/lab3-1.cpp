#include <stdio.h>
struct People {             // Structure declaration
  int Amount;         // Member (int variable)
  char Countryname[];   // Member (string variable)
};
typedef struct People Q;

int main () {
    struct People America;
    Q Iran;
    America.Amount = 10000000;
    Iran.Amount = 50000000;
    printf("Ameriaca:%d Iran:%d",America.Amount,Iran.Amount);
    }
