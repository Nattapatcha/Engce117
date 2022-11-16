#include <stdio.h>

int main()
{
    int Mamacup=0,kettle=0;
    int Boil;
    printf("putwaterinkettle");
    scanf("%d", &Boil);
    do{
    printf("waitwaterboil");
    scanf("%d", &Boil);}
    while (Boil==0);
    if(Boil==1){
        printf("putwater in mamacup\n");
        printf("wait3minute\n");
        printf("put spice");
    }

}