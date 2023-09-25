#include<stdio.h>
#include<conio.h>
void main()
{
float  sal,ta,da,hra,ts;
printf("enter basic salary");
scanf("%f",&sal);
if(sal<10000)
{
ta=(sal*3)/100;
da=(sal*4)/100;
hra=(sal*5)/100;
}
else
if(sal<15000)
{
ta=(sal*4)/100;
da=(sal*5)/100;
hra=(sal*6)/100;
}
else
ta=(sal*5)/100;
da=(sal*6)/100;
hra=(sal*7)/100;
}
ts=sal+ta+da+hra;
printf("basic salary=%f",sal);
printf("\n travelling allowance =%f",ta);
printf("\n dearness allowance =%f", da);
printf("\n house rent allowance = %f", hra);
printf("\n total salary -=%f",ts);
getch();
}
