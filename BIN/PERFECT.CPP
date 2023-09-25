#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,i,s=0;
 printf("enter number");
 scanf("%ld",&n);
 for(i=1;i<=n/2;i++)
 {
     if(n%i==0)
     {
	s=s+i;
     }
}
if(s==n)
printf("perfect nuumber");
else
printf(" not");
getch();
}