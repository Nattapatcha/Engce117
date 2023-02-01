#include <stdio.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
};

class LinkedList
{
protected:
    struct studentNode *start, **now;

public:
    LinkedList();                                   // à¸à¸³à¸«à¸™à¸”à¸„à¹ˆà¸²à¹€à¸£à¸´à¹ˆà¸¡à¸•à¹‰à¸™à¸‚à¸­à¸‡ start à¹à¸¥à¸° now
    ~LinkedList();                                  // à¸„à¸·à¸™à¸«à¸™à¹ˆà¸§à¸¢à¸„à¸§à¸²à¸¡à¸ˆà¸³à¸—à¸µà¹ˆà¸ˆà¸­à¸‡à¹„à¸§à¹‰à¹ƒà¸™à¸¥à¸´à¸‡à¸„à¹Œà¸¥à¸´à¸ªà¸•à¹Œà¸—à¸¸à¸à¹‚à¸«à¸™à¸”
    void InsNode(char n[], int a, char s, float g); // à¹à¸—à¸£à¸à¹‚à¸«à¸™à¸”à¹ƒà¸«à¸¡à¹ˆà¸­à¸¢à¸¹à¹ˆà¸à¹ˆà¸­à¸™à¹‚à¸«à¸™à¸”à¸›à¸±à¸ˆà¸ˆà¸¸à¸šà¸±à¸™
    void DelNode();                                 // à¸¥à¸šà¹‚à¸«à¸™à¸”à¸›à¸±à¸ˆà¸ˆà¸¸à¸šà¸±à¸™
    GoNext();                                       // à¹€à¸›à¸¥à¸µà¹ˆà¸¢à¸™à¹‚à¸«à¸™à¸”à¸›à¸±à¸ˆà¸ˆà¸¸à¸šà¸±à¸™à¹„à¸›à¸Šà¸µà¹‰à¸—à¸µà¹ˆà¹‚à¸«à¸™à¸”à¸–à¸±à¸”à¹„à¸›
    virtual void ShowNode();                        // à¹à¸ªà¸”à¸‡à¸‚à¹‰à¸­à¸¡à¸¹à¸¥à¹ƒà¸™à¹‚à¸«à¸™à¸”à¸›à¸±à¸ˆà¸ˆà¸¸à¸šà¸±à¸™
};                                                  // end class

class NewList : public LinkedList
{
public:
    GoFirst();               // à¹€à¸›à¸¥à¸µà¹ˆà¸¢à¸™à¹‚à¸«à¸™à¸”à¸›à¸±à¸ˆà¸ˆà¸¸à¸šà¸±à¸™à¹„à¸›à¸Šà¸µà¹‰à¸—à¸µà¹ˆà¹‚à¸«à¸™à¸”à¹€à¸£à¸´à¹ˆà¸¡à¸•à¹‰à¸™
    virtual void ShowNode(); // à¹à¸ªà¸”à¸‡à¸‚à¹‰à¸­à¸¡à¸¹à¸¥à¹ƒà¸™à¸—à¸¸à¸à¹‚à¸«à¸™à¸”à¸•à¸±à¹‰à¸‡à¹à¸•à¹ˆà¹€à¸£à¸´à¹ˆà¸¡à¸•à¹‰à¸™à¸–à¸¶à¸‡à¸ªà¸¸à¸”à¸—à¹‰à¸²à¸¢
};                           // end class

int main()
{
    LinkedList listA;
    NewList listB;
    LinkedList *listC;

    listA.InsNode("one", 1, 'A', 1.1);
    listA.InsNode("two", 2, 'B', 2.2);
    listA.InsNode("three", 3, 'C', 3.3);
    listA.GoNext();
    listA.ShowNode();

    listB.InsertNode("four", 4, 'D', 4.4);
    listB.InsertNode("five", 5, 'E', 5.5);
    listB.InsertNode("six", 6, 'F', 6.6);
    listB.GoNext();
    listB.DelNode();
    listB.ShowNode();

    listC = &listA;
    listC->GoNext();
    listC->ShowNode();

    listC = &listB;
    listC->ShowNode();

    return 0;
} // end function

void LinkedList::InsNode( char n[], int a, char s, float g ) {
  struct studentNode *temp = new studentNode ;
  strcpy( temp->name, n ) ;
  temp->age = a ;
  temp->sex = s ;
  temp->gpa = g ;

  temp->next = *now ;
  *now = temp ;
}

void LinkedList::DelNode() {
  struct studentNode *temp = *now ;
  *now = (*now)->next ;
  delete temp ;
}

void LinkedList::GoNext() {
  now = &((*now)->next) ;
}

void LinkedList::ShowNode() {
  cout << "Name : " << (*now)->name << endl ;
  cout << "Age : " << (*now)->age << endl ;
  cout << "Sex : " << (*now)->sex << endl ;
  cout << "GPA : " << (*now)->gpa << endl ;
}

void NewList::GoFirst() {
  now = &start ;
}

void NewList::ShowNode() {
  GoFirst() ;
  while ( *now != NULL ) {
    cout << "Name : " << (*now)->name << endl ;
    cout << "Age : " << (*now)->age << endl ;
    cout << "Sex : " << (*now)->sex << endl ;
    cout << "GPA : " << (*now)->gpa << endl ;
    GoNext() ;
  }
}