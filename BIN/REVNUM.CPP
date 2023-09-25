#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n;
 printf("enter number");
 scanf("%ld",&n);
 for(;n>0;)
 {
  printf("%d",n%10);
  n=n/10;
 }
  getch();
}