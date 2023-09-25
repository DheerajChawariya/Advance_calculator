#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 long int n,a[10],t=0,s=0;
 clrscr();
 printf("enter binary number[only press digit BETWEEN 0 TO 1]\n");
 scanf("%ld",&n);
for(;n>0;n=n/10)
{
  a[t]=n%10;
  if(!(a[t]<=1))
  {
   printf("invalid binary number\n");
   exit(0);
  }
 t++;
}
t--;
printf("decimal number\n");
for(;t>=0;t--)
{
s=s+a[t]*pow(2,t);
}
printf("%ld",s);
}

