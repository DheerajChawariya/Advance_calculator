#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct emp
{ int empno;
 char ename[20];
 emp *link;
};
 class queue
 {
 emp *front,*rear;
 public:
 queue()
 {
 rear=NULL;
 front=NULL;
 }
 void insert();
 void del();
 void display();
 };
 void queue::insert()
 {
 emp *temp=new emp;
 cout<<"\nemp number\n";
 cin>>temp->empno;
 cout<<"\nenter empname\n";
 gets(temp->ename);
 temp->link=NULL;
 if(front==NULL)
 {
 rear=front=temp;
 return;
 }
 rear->link=temp;
 rear=temp;
 }
 void queue::del()
 {
 if(front==NULL)
 cout<<"\nunderflow\n\n";
 else
 {
 emp *temp=front;
 cout<<"\nremove data\n";
 cout<<temp->empno<<"\t";
 cout<<temp->ename;
 front=front->link;
 delete temp;
 if(front==NULL)
 rear=NULL;
 }
 }
 void queue::display()
 {
 if(front==NULL)
 {
  cout<<"list empty";
  return;
  }
 emp *temp=front;
 while(temp!=NULL)
 {
 cout<<"\n employee number="<<temp->empno;
 cout<<"\temployee name="<<temp->ename;
 temp=temp->link;
 }
 }
void main()
{
clrscr();
queue o;
int ch;
while(1)
{
cout<<"\nmenu \n 1 insert \n 2 delete\n 3 display\n 4 exit";
cout<<"\nenter  choice";
cin>>ch;
switch(ch)
{
case 1:
o.insert();
break;
case 2:
o.del();
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



