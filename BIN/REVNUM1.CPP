#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,rev=0,m;
 printf("enter number");
 scanf("%ld",&n);
 for(;n>0;)
 {
  rev=rev*10+n%10;
  n=n/10;
 }
  printf("reeverse number=%ld",rev);
  getch();
}