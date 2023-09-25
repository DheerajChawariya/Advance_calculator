#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
void main()
{
clrscr();
float p,c,m,t,per;
printf("enter marks of pcm out of 100");
scanf("%f%f%f",&p,&c,&m);
if(p>100 || c>100 || m>100)
{
printf("invalid marks");
exit(0);
}
t=p+c+m;
per=(t*100)/300;
printf("total marks=%f",t);
printf("\npercentage=%f",per);
if(per<36)
printf("\nfail");
else if(per<45)
printf("\nthird");
else
if(per<60)
printf("\nsecond");
else if(per<95)
printf("\nfirst division");
else
printf("\nmerit student");
}
