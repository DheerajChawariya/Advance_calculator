#include<stdio.h>
#include<conio.h>
#include<iostream.h>
 const int max=5;
 int front=-1,rear=-1,Queue[max];
 void Qins(int num)
 {
 if(rear==max-1)
 {
 printf("Queue overflow\n");
 return;
 }
 if(front==-1)
 front=rear=0;
 else
 rear++;
 Queue[rear]=num;
 }
 void display()
 {
 if(front==-1)
 {
 printf("list is empty\n");
 return;
 }
 int i;
 printf("list display\n");
 for(i=front;i<=rear;i++)
 {
 printf("%d",Queue[i]);
 }
}
 void del()
 {
 if(front==-1)
 {
 printf("underflow");
 return;
 }
 printf("remove data=%d",Queue[front]);
 if(front==rear)
 front=-1;
 else
 front++;
 }
 void main()
 {
 int ch,num;
 cout<<"press button\n 1 for insert \n 2 for delete \n 3 for display \n except this invalid choicee";
 while(1)
 {
  cout<<"enter choice";
  cin>>ch;
  if(ch==1)
  {
   cout<<"enter number";
   cin>>num;
   qins(num);
  }
  else if(ch==2)
  qdel();
  else if(ch==3)
  display();
  else
  cout<<"invalid choice";
 }
}
