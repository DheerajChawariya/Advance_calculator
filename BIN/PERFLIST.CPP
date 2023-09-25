#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,i,s=0,r,st,end;
 printf("enter starting point and ending point\n");
 scanf("%ld%ld",&st,&end);
 printf("list of perfect number");
 for(r=st;r<=end;r++)
 {
  n=r;
  s=0;
  for(i=1;i<=n/2;i++)
  {
     if(n%i==0)
     {
	s=s+i;
     }
   }
 if(s==n)
 printf("%d ",n);
}
getch();
}