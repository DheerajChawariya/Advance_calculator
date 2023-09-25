#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
long int R,n,b,a,i,prime;
printf("enter starting and ending point");
scanf("%ld%ld",&a,&b);
for(R=a;R<=b;R++)
{
n=R;
prime=1;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
prime=0;
break;
}
}
if(prime)
printf("\n%ld is prime number",n);
}
getch();
}