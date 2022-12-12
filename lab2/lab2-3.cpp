#include <stdio.h>
#include <string.h>
char *Gettext();
int main()
{

    char b[20];
    strcpy(b, Gettext());
    printf(" %s\n", b);
    return 0;
}
char *Gettext()
{

    char *text = new char[20];
    printf(" Input text");
    gets(text);
    return text;
}