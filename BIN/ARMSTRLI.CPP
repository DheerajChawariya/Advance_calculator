#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 long int m,n,s,r,st,end,p,d;
 printf("enter starting and ending\n");
 scanf("%ld%ld",&st,&end);
 printf("armstrong list\n");
 for(r=st;r<=end;r++)
 {
  p=m=n=r;
  s=0;
  d=0;
  for(;p>0;p=p/10)
  {
   d++;
   }
 for(;n>0;n=n/10)
 {
   s=s+pow(n%10,d);
  }
  if(m==s)
  printf(" %ld",m);
 }
}






