#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int r,s,c;
for(r=5;r>=1;r--)
 {
 for(s=1;s<=5-r;s++)
{
 printf(" ");
}
for(c=r;c>=r;c--)
{
printf("%d",r);
}
printf("\n");
}
getch();
}