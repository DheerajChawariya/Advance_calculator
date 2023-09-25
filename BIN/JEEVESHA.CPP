#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,max;
printf("enter four no.");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=(a>b)?a:b;
max=(max>c)?max:c;
max=(max>d)?max:d;
printf("maximum value=%d", max);
getch();
}