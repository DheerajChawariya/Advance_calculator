


















#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
 int t;    //*a=*a+*b;
 t=*p;    //*b=*a-*b;
 *p=*q;   //*a=*a-*b;
 *q=t;
}
void main()
{
 clrscr();
 int a,b;
 printf("enter two number\n");
 scanf("%d%d",&a,&b);
 printf("before swap=\n");
 printf("a=%d\tb=%d",a,b);
 swap(&a,&b);
 printf("\nafter swap=\n");
 printf("a=%d\tb=%d",a,b);
}

