# include<stdio.h>
#include<conio.h>
enum days
{
saturday,sunday=0,monday,tuesday,wednesday,thursday,friday
}today;


void main()
{
enum days tuesday=5;
 int a=5;
enum  days monday=a;
enum days yesterday=0;
enum days tomorrow;
clrscr();
printf("%d %d %d",tuesday,yesterday,tomorrow);
getch();
}

