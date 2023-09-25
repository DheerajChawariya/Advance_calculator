#include<stdio.h>
#include<conio.h>
struct complex
{
int x,y;
}c1,c2,c;
void main()
{
clrscr();
printf("enter real and imaginary part of complex number1\n");
scanf("%d%d",&c1.x,&c1.y);
printf("enter real and imaginary part of complex number2\n");
scanf("%d%d",&c2.x,&c2.y);
printf("\n%d+%di",c1.x,c1.y);
printf("\n%d+%di",c2.x,c2.y);
c.x=c1.x+c2.x;
c.y=c1.y+c2.y;
printf("\naddition of two comlpex\n");
printf("\n%d+i%d",c.x,c.y);
c.x=c1.x-c2.x;
c.y=c1.y-c2.y;
printf("\nsubtraction of two comlpex\n");
printf("\n%d+i%d",c.x,c.y);
c.x=c1.x*c2.x-c1.y*c2.y;
c.y=c1.x*c2.y+c1.y*c2.x;
printf("\nmultiplication of two complex no.\n");
printf("\n%d+i%d",c.x,c.y);
}