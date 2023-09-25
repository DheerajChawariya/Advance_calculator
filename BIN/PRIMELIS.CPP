#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,i,prime,r,st,end;
 printf("enter starting point and ending point\n");
 scanf("%ld%ld",&st,&end);
 printf("list of prime number\n");
 for(r=st;r<=end;r++)
 {
  n=r;
  prime=1;
  i=2;
  while(i*i<=n)
  {
     if(n%i==0)
     {
	prime=0;
	break;
     }
     i++;
   }
 if(prime)
 printf("%d ",n);
}
getch();
}