#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 long int n,i,prime=1;
 printf("enter number");
 scanf("%ld",&n);
 for(i=2;i<n;i++)
 {
     if(n%i==0)
     {
     printf("not");
	prime=0;
	break;
     }
 }
 if(prime)
 printf("prime number");
 getch();
}