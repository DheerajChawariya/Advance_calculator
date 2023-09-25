#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 long int m,n,r,s=0;
 printf("enter number");
 scanf("%ld",&n);
 m=n;
 for(;n>0;n=n/10)
 {
   r=n%10;
   s=s+pow(r,3);
  }
  if(m==s)
  printf("armstrong number");
  else
  printf("not");
}