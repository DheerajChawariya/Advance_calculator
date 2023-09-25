//WAP example of automatic type conversion
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 printf("%d",1+'1'); //1+49=50
 printf("\n%c",'1'+1);      //49+1=50('2')
 printf("\n%c",'1'+'1');    //49+49=98('b')
 printf("\n%d",'1'+'1');
 printf("\n%d",'A'+32); //65+32=97
 printf("\n%c",'A'+32);
 printf("\n%d",'A'+'B');  //65+66
 getch();
}