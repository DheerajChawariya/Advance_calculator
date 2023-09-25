#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
 int data;
 node *next;
}*start=NULL;
node* create(struct node *t,int num)
{
  if(t==NULL)
  {
  t=new node;
  t->data=num;
  t->next=NULL;
  }
  else
  {
    t->next=create(t->next,num);
  }
  return(t);
}
void display(struct node *ptr)
{
    if(ptr==NULL)
    return;
 printf("%d ",ptr->data);
 display(ptr->next);
}
void topins(int num)
{
 node *q,*t;
 t=new node;
 t->data=num;
 t->next=start;
 start=t;
}
void afterins(int pos,int num)
{
 node *q,*t;
 q=start;
 int i;
 for(i=1;i<pos;i++)
 {
  q=q->next;
  if(q==NULL)
  {
   cout<<"less node according to given position";
   return;
  }
}
t=new node;
t->data=num;
t->next=q->next;
q->next=t;
}
void Delete(int num)
{
 node *q,*r;
 if(start==NULL)
 {
 cout<<"list is empty";
 return;
 }
 q=start;
 if(start->data==num)
 {
   start=start->next;
   delete q;
  return;
 }
 while(q->next->data!=num)
 {
  q=q->next;
 if(q->next==NULL)
 {
  cout<<"not found\n";
  return;
 }
}
 r=q->next;
 q->next=r->next;
 delete r;
}
void reverse(node *ptr){
	if(ptr==NULL)
		return;
	reverse(ptr->next);
	cout<<ptr->data<<" ";
}
void main()
{
 clrscr();
 int ch,num,pos;
 char choice;
 do
 {
 cout<<"enter 1 create,2 display,3 top insert,4 afterins,5 delete,6 reverse\n";
  cout<<"enter choice";
  cin>>ch;
  switch(ch)
  {
   case 1:
   cout<<"ener number";
   cin>>num;
   start=create(start,num);
   break;
   case 2:
  if(start==NULL)
 {
  cout<<"list is empty";
  break;
 }
   printf("list display\n");
   display(start);
   break;
   case 3:
   cout<<"ener number";
   cin>>num;
   topins(num);
   break;
   case 4:
   cout<<"ener number";
   cin>>num;
   cout<<"\nenter position";
   cin>>pos;
   afterins(pos,num);
   break;
   case 5:
   cout<<"ener number to be deleted";
   cin>>num;
   Delete(num);
   break;
   case 6:
   reverse(start);
   break;

   default:
   cout<<"invalid choice";
  }
  cout<<"\nfor continue opertion press y for yes otherwise n for no\n";
  cin>>choice;
}while(choice=='y'||choice=='Y');
}