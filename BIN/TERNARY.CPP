#include<stdio.h>
#include<conio.h>
void main()
{
printf("%d",1?5:3);
printf("\n%d", 0?5:3);
printf("\n%d",1?(5>3)?5:3:(3<5)?3:5);
printf("\n%d",0?((6>4)?6:4):((9<4)?9:4));
}