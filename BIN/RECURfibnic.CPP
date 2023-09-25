#include<stdio.h>
#include<conio.h>
int fib(int n)
{
 if(n==1)
  return 0;
 else if(n==2)
  return 1;
 else
 return fib(n-1)+fib(n-2);
}
void main()
{
clrscr();
 int n,i;
 printf("enter how many term to be displayed");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("%d ",fib(i));
 }
getch();
}