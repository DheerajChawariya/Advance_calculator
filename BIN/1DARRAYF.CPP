#include<stdio.h>
#include<conio.h>
void fun(int b[],int n)   //void fun(int *b,int n)
{
 printf("\narray list display\n");
 for(int i=0;i<n;i++)
 {
  printf("%d ",b[i]);
   b[i]=b[i]+2;
 }
}
void main()
{
clrscr();
 int i;
 int a[50],n;
 printf("enter how many content insertt into array list");
scanf("%d",&n);
printf("enter values into arraay list\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
fun(a,n);      //fun(&a[0],n);
printf("\nAfter calling list display\n");
for(i=0;i<n;i++)
{
 printf("%d ",a[i]);
}
}