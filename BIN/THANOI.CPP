#include<stdio.h>
#include<conio.h>
void tower(char,char,char,int);
void tower(char peg1,char peg2,char peg3,int n)
{
if(n<=0)
printf("\n illegal entry");
if(n==1)
printf("\n move disk from %c to %c",peg1,peg3);
else
{
tower(peg1,peg3,peg2,n-1);
tower(peg1,peg2,peg3,1);
tower(peg2,peg1,peg3,n-1);
}
}
void main()
{
clrscr();
int n;
printf("\n input the number of didcs");
scanf("%d",&n);
printf("\n tower of hanoi for %d discs",n);
tower('X','Y','Z',n);
}