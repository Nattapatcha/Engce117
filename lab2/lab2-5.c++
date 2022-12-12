#include <stdio.h>
char (*GetText2D())[16];

int main()
{
	char (*Basket)[16];
	Basket = GetText2D();
	for (int i = 0 ; i < 10;i++)
	{
		printf("%s \n",Basket[i]);
	}
	return 0;
}
char (*GetText2D())[16]
{
	int i ; 
	char (*Fries)[16];
	for (i = 0 ; i < 10 ;i++)
	{
		printf("Enter string [%d]: ",i);
		gets(Fries[i]);
	}
	return Fries;
}