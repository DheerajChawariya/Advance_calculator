#include<stdio.h>
#include<conio.h>
void fun(int p,int q)
{
p=p+4;
q=q-2;
printf("\nin defination block\n");
printf("p=%d\tq=%d",p,q);
}
void main()
{
clrscr();
int a=5,b=3;
printf("before calling in main function block\n");
printf("a=%d\tb=%d",a,b);
fun(a,b);
printf("\nafter calling in main() block\n");
printf("a=%d\tb=%d",a,b);
getch();
}

