//นาย ณัฐภัทร เจริญกิจหัตถกร 65543206011-0 Sec2
//https://youtu.be/EeI9JW2Yhgw
#include <stdio.h>
#include <string.h>
struct Asiankid
{
    int age;
    struct Asiankid *next;
};
struct Asiankid *AddNode(struct Asiankid **walk, int a); // prototype
void showall(struct Asiankid *walk);                     // prototype
void updatenode(struct Asiankid *walk, int n, int e);    // prototype
void swapnode(struct Asiankid **Walk, int x, int y);
void Showback(struct Asiankid **Walk);
int main()
{
    struct Asiankid *begin, *now;
    begin = NULL;
    now = AddNode(&begin, 20);
    showall(begin);
    now = AddNode(&begin, 15);
    showall(begin);
    now = AddNode(&begin, 90);
    showall(begin);
    now = AddNode(&begin, 26);
    showall(begin);
    updatenode(begin, 20, 30);
    showall(begin);
    swapnode(&begin, 26, 15);
    showall(begin);
    Showback(&begin);
    showall(begin);
    return 0;
}
void showall(struct Asiankid *walk)
{
    while (walk != NULL)
    {
        printf("%d ", walk->age);
        walk = walk->next;
    } // end while
    printf("\n");

} // end function
struct Asiankid *AddNode(struct Asiankid **walk, int a)
{
    while (*walk != NULL)
    {
        walk = &(*walk)->next;
    }
    *walk = new struct Asiankid;
    (*walk)->age = a;
    (*walk)->next = NULL;
    return *walk;
}
void updatenode(struct Asiankid *walk, int n, int e)
{
    Asiankid *Curr = walk;
    while (Curr->next != NULL)
    {
        if (Curr->age == n)
        {
            Curr->age = e;
        }
        Curr = Curr->next;
    }
}

void Showback(struct Asiankid **Walk)
{
    struct Asiankid *current = *Walk;
    struct Asiankid *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *Walk = prev;
}
void swapnode(struct Asiankid **Walk, int a, int b)
{
    Asiankid *current = *Walk;
    Asiankid *prev = NULL;
    Asiankid *Fnode = NULL;
    Asiankid *Snode = NULL;
    Asiankid *prevf = NULL;
    Asiankid *prevs = NULL;

    while (current)
    {
        if (current->age == a)
        {
            Fnode = current;
            prevf = prev;
        }
        else if (current->age == b)
        {
            Snode = current;
            prevs = prev;
        }
        prev = current;
        current = current->next;
    }
    if (prevf)
    {
        prevf->next = Snode;
    }
    if (prevs)
    {
        prevs->next = Fnode;
    }

    Asiankid *temp = Fnode->next;
    Fnode->next = Snode->next;
    Snode->next = temp;
}
