#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,count=0;
 printf("enter number");
 scanf("%ld",&n);
 for(;n>0;)
 {
  count++;
  n=n/10;
 }
  printf("count of digit=%ld",count);
  getch();
}