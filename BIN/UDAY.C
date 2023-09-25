#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*start;
void create(int num)
{
struct node*t,*r;
if(start==NULL)
{
start=(structnode*)malloc(sizeof(structnode));
start->data=num;
start->next=NULL;
}
else
r=*start;
while(r->next!=NULL)
{
r=r->next;
}
t=(structnode)malloc(sizeof(structnode));
t->data=num;
t->next=null;
}
void display()
{
int count=0;
node*q;
if(start=NULL)
{
printf("list is display");
return=0;
}
printf("list is count");
for(start=q;q!=null;q=q->next)
{
printf("%d",q->data);
}

