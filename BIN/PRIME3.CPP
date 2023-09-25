#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,i=2,prime=1;
 printf("enter number");
 scanf("%ld",&n);
 while(i*i<=n)
 {
     if(n%i==0)
     {
	printf("not prime");
	prime=0;
	break;
     }
     i++;
 }
 if(prime)
 printf("prime number");
 else
 printf("not");
 getch();
}