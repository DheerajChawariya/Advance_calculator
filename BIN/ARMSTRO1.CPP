#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 long int m,n,r,s=0,d=0,p;
 printf("enter number");
 scanf("%ld",&n);
 p=m=n;
 for(;p>0;p=p/10)
 {
   d++;
 }
 for(;n>0;n=n/10)
 {
   r=n%10;
   s=s+pow(r,d);
  }
  if(m==s)
  printf("armstrong number");
  else
  printf("not");
}