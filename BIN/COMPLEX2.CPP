#include<stdio.h>
#include<conio.h>
#include<math.h>
struct complex
{
float x,y;
}c1,c2,c;
void add(complex c1,complex c2)
{
 c.x=c1.x+c2.x;
 c.y=c1.y+c2.y;
 printf("\naddition of two comlpex\n");
 printf("%g+(%g)i",c.x,c.y);
}
void sub(complex c1,complex c2)
{
c.x=c1.x-c2.x;
c.y=c1.y-c2.y;
printf("\nsubtraction of two comlpex\n");
printf("%g+(%g)i",c.x,c.y);
}
void multi(complex c1,complex c2)
{
c.x=c1.x*c2.x-c1.y*c2.y;
c.y=c1.x*c2.y+c1.y*c2.x;
printf("\nmultiplication of two complex no.\n");
printf("%g+(%g)i",c.x,c.y);
}
void div(complex c1,complex c2)
{
c.x=(c1.x*c2.x+c1.y*c2.y)/(pow(c2.x,2)+pow(c2.y,2));
 c.y=((c2.x*c1.y)-(c1.x*c2.y))/(pow(c2.x,2)+pow(c2.y,2));
 printf("\ndivision of two complex no.\n");
 printf("%g+(%g)i",c.x,c.y);
}
void main()
{
clrscr();
char ch,choice;
do
{
clrscr();
printf("\nenter choice +,-,*,/\n");
scanf("%c",&ch);
printf("\nenter real and imaginary part of complex number1\n");
scanf("%f%f",&c1.x,&c1.y);
printf("\nenter real and imaginary part of complex number2\n");
scanf("%f%f",&c2.x,&c2.y);
printf("%g+(%g)i",c1.x,c1.y);
printf("\n%g+(%g)i",c2.x,c2.y);
switch(ch)
{
 case '+':
add(c1,c2);
 break;
 case '-':
 sub(c1,c2);
 break;
 case '*':
 multi(c1,c2);
 break;
 case '/':
 div(c1,c2);
 break;
 default:
 printf("invalid choice");
}
fflush(stdin);
printf("\nenter y for yes n for no\n");
scanf("%c",&choice);
fflush(stdin);
}while(choice=='Y'||choice=='y');
getch();
}