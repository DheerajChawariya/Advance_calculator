#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 register int a=5;
 register int b=a;
 {
 register int b=a;
 register int a=6;
  {
 register int b=a,a=9,c=7;
  printf("\n%p %p",&a,&b);
  printf("\t\t%d %d",a,b);
  }
// c=9;  //this is error because member of inner block data can not be used outside block
  printf("\n%p %p",&a,&b);
  printf("\t\t%d %d",a,b);
 }
 printf("\n%p %p",&a,&b);
printf("\t\t%d %d",a,b);
}
