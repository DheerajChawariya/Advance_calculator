#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,p,s=0,r,st,end;
 printf("enter starting and ending point\n");
 scanf("%ld%ld",&st,&end);
 printf("spy number list\n");
 for(r=st;r<=end;r++)
 {
 n=r;
 s=0;
 p=1;
 for(;n>0;)
 {
  p=p*(n%10);
  s=s+n%10;
  n=n/10;
 }
  if(p==s)
  printf(" %d",r);
}
  getch();
}