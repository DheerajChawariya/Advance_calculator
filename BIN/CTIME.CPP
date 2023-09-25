#include<stdio.h>
#include<conio.h>
struct time
{
int h,m,s;
}t1,t2,t3;
void main()
{
clrscr();
printf("enter hours,minute,second of time1");
scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
printf("enter hours,minute,second of time2");
scanf("%d%d%d",&t2.h,&t2.m,&t2.s);
t3.h=t1.h+t2.h;
t3.m=t1.m+t2.m;
t3.s=t1.s+t2.s;
t3.m=t3.m+t3.s/60;
t3.s=t3.s%60;
t3.h=t3.h+t3.m/60;
t3.m=t3.m%60;
printf("\n%d hours %d minute %d second",t1.h,t1.m,t1.s);
printf("\n%d hours %d minute %d second",t2.h,t2.m,t2.s);
printf("\n%d hours %d minute %d second",t3.h,t3.m,t3.s);
getch();
}