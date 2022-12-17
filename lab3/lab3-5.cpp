#include <stdio.h>

struct Gacha{
    int rolls;
};

int Pack(struct Gacha *tt_roll);

int main(){
    struct Gacha s;
    Pack(&s);
    printf("You press gacha : %d ", s.rolls);
}

int Pack(struct Gacha *tt_roll){
    struct Gacha rollnum;
    int p = 0;
    rollnum = *tt_roll;
    printf("Press gacha: ", p);
    scanf("%d",&p);
    rollnum.rolls = p;
    *tt_roll = rollnum;
}