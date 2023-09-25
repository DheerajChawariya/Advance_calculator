#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#define MAX 5
const int max=5;
int front=-1,rear=-1,Q[max];
 void Qins(int data)
 {
 if(front==-1&&rear==-1)
 {
 front=0;
 rear=0;
 Q[rear]=data;
 return;
 }
 if(front==0&&rear==max-1)||(front==rear+1)
 {
 printf("\n!!!Queue overflow!!!\n");
 return;
 }
 if(rear==max-1)
 rear=0;
 else
 rear=rear+1;
 Q[rear]=data;
 }
 void QDel()
 {
 int data;
 if(front==-1&&rear==-1)
 {
 printf("\nQueue underflow!!!\n");
 return;
 }
 cout<<"removed data="<<Q[front];
 if(front==rear)
 front=rear=-1;
 else
 if(front==max-1)
 front=0;
 else
 front=front+1;
 }
 void display()
 {
 if(front==-1)
 {
 printf("list is empty\n");
 return;
 }
 int i=front;
 printf("list display\n");
if(front<=rear)
{
 while(i<=rear)
  cout<<queue[i++]<<" ";
}
else
{
while(i<=max-1)
cout<<queue[i++]<<" ";
i=0;
 while(i<=rear)
  cout<<queue[i++]<<" ";
}
}
