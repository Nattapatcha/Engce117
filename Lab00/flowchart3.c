#include <stdio.h>
#include <string.h>
int main()
{char forget[30];
printf("checklist and money\n");
printf("get vehicle\n");
do{
    scanf("%s", &forget);
    printf("checklist and money\n");
    printf("get vehicle\n");
}while(strcmp(forget, "yes")==0);
if(strcmp(forget, "no")==0){
    printf("Go to market");
}



}