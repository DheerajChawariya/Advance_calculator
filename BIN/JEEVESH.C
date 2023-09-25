#include<stdio.h>                                                                                                                                                                                                     #oinclude<stdio.h>
#include<conio.h>
   void main()
   {
   clrscr();
 int i,n,s=0,a=1,b=1,p=1;
 printf("enter no. of terms");
 scanf("%d",&n);
for(i=1;i<=n;i++)
{ if(i%2 !=0)
{
 printf("%d-",a);
 s=s+a*p;
 a+=3;
 }
 else
 {printf("%d+",b*b);
 s=s+b*b*p;
 b++;
 }
 p=p*-1;
 }
 printf("\b=%d",s);
 getch();
 }
