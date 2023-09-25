#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter number");
scanf("%d",&n);
switch(n%2==0)
{
 case 1:
 printf("even");
 break;
 default:
 printf("odd");
}
}
