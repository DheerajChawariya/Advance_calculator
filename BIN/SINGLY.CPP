#include<stdio.h>
#include<iostream.h>
#include<conio.h>
struct node
{
 int data;   //data member
struct node *next;  //data member or self refrential structure
}*start;
void create(int num)
{
struct  node *t,*r;
  if(start==NULL)
  {
    start=new node;  //start=(struct node*)malloc(sizeof(struct node));
    start->data=num;
    start->next=NULL;
  }
  else
  {
     r=start;
     while(r->next!=NULL)
     {
       r=r->next;
     }
     t=new node; //t=(struct node*)malloc(sizeof(struct node));
     t->data=num;
     t->next=NULL;
     r->next=t;
   }
}
void display()
{
  int count=0;
  node *q;
 if(start==NULL)
 {
  cout<<"list is empty";   //printf("list is empty");
  return;
 }
 cout<<"list display\n";    //printf("list display\n");
 for(q=start;q!=NULL;q=q->next)
 {
  cout<<q->data<<" ";    //printf("%d "q->data);
  count++;
 }
 cout<<"\ncount of node="<<count;  //printf("\ncount of node=%d",count);
}
void topins(int num)
{
 node *t;
 t=new node; //t=(struct node*)malloc(sizeof(struct node));
 t->data=num;
 t->next=start;
 start=t;
}
void afterins(int pos,int num)
{
if(start==NULL)
{
 printf("empty");
 return;
}
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
t=new node;   //t=(struct node*)malloc(sizeof(struct node));
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
   delete q;                  //free(q);
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
void reverse()
{
 node *prev,*ptr,*link;
	prev=NULL;
	ptr=start;
	while(ptr!=NULL){
		link=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=link;
	}
	start=prev;
 }
void main()
{
 clrscr();
 start=NULL;
 int ch,num,pos;
 char choice;
 do
 {
 cout<<"enter 1 create,2 display,3 top insert,4 afterins,5 delete 6 reverse\n";
 cout<<"enter choice";
 cin>>ch;
  switch(ch)
  {
   case 1:
   cout<<"ener number";
   cin>>num;
   create(num);
   break;
   case 2:
   display();
   break;
   case 3:
   cout<<"enter number";
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
   reverse();
   break;
   default:
   cout<<"invalid choice";
  }
  cout<<"\nfor continue opertion press y for yes otherwise n for no\n";
  cin>>choice;
 }while(choice=='y'||choice=='Y');
}