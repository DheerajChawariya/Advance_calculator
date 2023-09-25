#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct emp
{
   int empno;
   char ename[20];
   emp *link;
};
class stack
{
public:
  emp *top;
  stack()
  {
  top=NULL;
  }
  void push();
  void pop();
  void display();
  ~stack();
};
void stack::push()
{
 emp *temp=new emp;
 cout<<"\nenter employ no\n";
 cin>>temp->empno;
 cout<<"\nempoy name\n";
 gets(temp->ename);
 temp->link=top;
 top=temp;
 }
 void stack::pop()
 {
 if(top==NULL)
 {
  cout<<"\nunderflow";
   return;
  }
   emp *temp=top;
  cout<<"\nremove data\n";
 cout<<temp->empno<<"\t"<<temp->ename;
   top=top->link;
   delete temp;
 }

void stack:: display()
{
if(top==NULL)
{
cout<<"statck is empty";
return;
}
 emp *temp=top;
  while(temp!=NULL)
  {
  cout<<"\nemploye number"<<temp->empno;
  cout<<"\temployee name="<<temp->ename;
  temp=temp->link;
  }
 }
void main()
{
clrscr();
stack o;
int ch;
while(1)
{
cout<<"\nmenu \n 1 push \n 2 pop\n 3 display\n 4 exit";
cout<<"\nenter  choice";
cin>>ch;
switch(ch)
{
case 1:
o.push();
break;
case 2:
o.pop();
break;
case 3:
o.display();
break;
default:
cout<<"\nwrong choice";
exit(1);
}
}
}

