#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,i,f=1;
 printf("enter number");
 scanf("%ld",&n);
 for(i=1;i<=n;i++)
 {
    f=f*i;
 }
 printf("factoruial number=%ld",f);
 getch();
}