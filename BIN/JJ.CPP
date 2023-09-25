#include<stdio.h>
#include<conio.h>
typedef float funct(float a,int b);
funct add
{
 printf("%f",a+b);
}
funct sub
{
 printf("\n%f",a-b);
}
funct multi
{
 printf("\n%f",a*b);
}
void main()
{
clrscr();
 add(5.3,4);
 sub(3,8);
 multi(7.3,2);
}

