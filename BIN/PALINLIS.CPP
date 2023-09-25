#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,rev,m,st,end,r;
 printf("enter statrt and ending point\n");
 scanf("%ld%ld",&st,&end);
 printf("palindrome listr\n");
 for(r=st;r<=end;r++)
 {
 m=n=r;
 rev=0;
 for(;n>0;)
 {
  rev=rev*10+n%10;
  n=n/10;
 }
 if(m==rev)
 printf(" %ld",m);
}
  getch();
}