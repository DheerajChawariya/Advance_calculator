#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int r=1;
 for(;;)
 {
  printf("%d ",r);
  r++;
  if(r>5)
   break;
  }

 getch();
}