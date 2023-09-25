#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("enter two number");
  scanf("%d%d",&a,&b);
  switch(a>b)
  {
   case 1:
   printf("%d is greater",a);
   break;
   default:
   switch(a==b)
   {
    case 1:
    printf("same");
    break;
    default:
    printf("%d is greater",b);
   }
  }
}




