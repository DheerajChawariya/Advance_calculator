#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,s=1;
 printf("enter number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    printf("%d*",i);
    s=s*i;
 }
 printf("\b=%d",s);
 getch();
}