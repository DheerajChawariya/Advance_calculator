#include<stdio.h>
#include<conio.h>
long int fact(long int n)
{
 if(n==0||n==1)
  return 1;
 return n*fact(n-1);
}
void main()
{
 clrscr();
 long int n;
 printf("enter number");
 scanf("%ld",&n);
 printf("factorial number=%ld",fact(n));
}
